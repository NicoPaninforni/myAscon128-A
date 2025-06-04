`timescale 1ns/1ps

module tb_ascon_top;

    // === Costanti fisse per la versione sintetizzata ===
    localparam int WIDTH_RAND = 300;         // d=10, PAR=6, COL_SIZE=5 → 10*6*5 = 300
    localparam int WIDTH_RAND_SBOX = 55;     // (10*(10+1))/2 = 55
    localparam int MASK_BYTES = (WIDTH_RAND + 7) / 8; // 38
    localparam int MASK_SBOX_BYTES = (WIDTH_RAND_SBOX + 7) / 8; // 7

    // === Segnali DUT ===
    reg clk;
    reg reset_n;
    reg start;
    reg key_valid;
    reg valid_data_in;
    reg last_block;
    reg EOT;

    reg [63:0] key1, key2, nonce1, nonce2, initialVector;
    reg [127:0] data_in;
    reg [4:0] valid_bytes;

    reg [WIDTH_RAND-1:0] random_masks;
    reg [WIDTH_RAND_SBOX-1:0] random_masks_sbox;

    wire done, ready_tag, ready_for_data, ciphertext_valid, extra_padding_ff;
    wire [127:0] ciphertext;
    wire [63:0] tag1, tag2;

    // === Memories ===
    reg [7:0] aad_mem [0:1023];
    reg [7:0] msg_mem [0:4095];
    reg [7:0] mask_mem [0:MASK_BYTES-1];
    reg [7:0] mask_sbox_mem [0:MASK_SBOX_BYTES-1];

    reg force_last_block;
    reg force_EOT;


    integer aad_len;
    integer msg_len;
    integer aad_index;
    integer msg_index;
    reg aad_done;
    reg msg_done;

    integer len_file;
    integer i;

    integer debug_file;

    // === DUT post-sintesi (senza parameter!) ===
    ascon_top dut (
        .clk(clk),
        .reset_n(reset_n),
        .start(start),
        .key_valid(key_valid),
        .valid_data_in(valid_data_in),
        .last_block(last_block),
        .EOT(EOT),
        .key1(key1),
        .key2(key2),
        .nonce1(nonce1),
        .nonce2(nonce2),
        .initialVector(initialVector),
        .data_in(data_in),
        .valid_bytes(valid_bytes),
        .random_masks(random_masks),
        .random_masks_sbox(random_masks_sbox),
        .ciphertext_valid(ciphertext_valid),
        .ciphertext(ciphertext),
        .done(done),
        .ready_tag(ready_tag),
        .tag1(tag1),
        .tag2(tag2),
        .ready_for_data(ready_for_data),
        .extra_padding_ff(extra_padding_ff)
    );

    // === Clock generation ===
    initial clk = 0;
    always #5 clk = ~clk;

    // === Stimulus ===
    initial begin
        integer clk_count;
        clk_count = 0;
        force_last_block = 0;
        force_EOT = 0;


        $dumpfile("dump.vcd");
        $dumpvars(0, tb_ascon_top);

        debug_file = $fopen("debug_output.txt", "w");
        if (debug_file == 0) begin
            $display("❌ ERRORE: non riesco ad aprire debug_output.txt");
            $finish;
        end

        // Reset
        reset_n = 0;
        start = 0;
        key_valid = 0;
        valid_data_in = 0;
        last_block = 0;
        EOT = 0;
        valid_bytes = 0;

        #20;
        reset_n = 1;

        // === Initialize inputs ===
        key1 = 64'h0706050403020100;
        key2 = 64'h0f0e0d0c0b0a0908;
        nonce1 = 64'h08090a0b0c0d0e0f;
        nonce2 = 64'h0001020304050607;
        initialVector = 64'h00001000808c0001;

        // Load masks
        $readmemh("mask.txt", mask_mem);
        $readmemh("mask_sbox.txt", mask_sbox_mem);

        random_masks = '0;
        for (i = 0; i < MASK_BYTES; i = i + 1) begin
            random_masks = random_masks | (mask_mem[i] << (8 * i));
        end

        random_masks_sbox = '0;
        for (i = 0; i < MASK_SBOX_BYTES; i = i + 1) begin
            random_masks_sbox = random_masks_sbox | (mask_sbox_mem[i] << (8 * i));
        end

        // Load AAD + MSG
        $readmemh("aad_data.hex", aad_mem);
        $readmemh("msg_data.hex", msg_mem);

        len_file = $fopen("lengths.txt", "r");
        if (len_file == 0) begin
            $display("❌ ERRORE: non riesco ad aprire lengths.txt");
            $finish;
        end
        $fscanf(len_file, "%d", aad_len);
        $fscanf(len_file, "%d", msg_len);
        $fclose(len_file);

        $display("WIDTH_RAND=%0d (%0d bytes), WIDTH_RAND_SBOX=%0d (%0d bytes)", WIDTH_RAND, MASK_BYTES, WIDTH_RAND_SBOX, MASK_SBOX_BYTES);
        $display("AAD_LEN=%0d, MSG_LEN=%0d", aad_len, msg_len);

        // Start encryption
        #30;
        start = 1;
        key_valid = 1;
        #50;
        start = 0;
        key_valid = 0;

        aad_index = 0;
        msg_index = 0;
        aad_done = 0;
        msg_done = 0;

        // === Main loop ===
        forever begin
            @(posedge clk);
            clk_count = clk_count + 1;

            if (clk_count % 100 == 0)
                $display("Cycle %0d, done=%b, ready_for_data=%b, aad_done=%b, msg_done=%b", clk_count, done, ready_for_data, aad_done, msg_done);

            if (clk_count >= 10000) begin
                $display("⚠️  Timeout reached at cycle %0d, terminating simulation.", clk_count);
                $fclose(debug_file);
                $finish;
            end

            valid_data_in = 0;
            valid_bytes = 0;

            // Default → segnali a 0 quando non sto mandando
            last_block = force_last_block;
            EOT = force_EOT;

            if (ready_for_data) begin
                if (!aad_done) begin
                    send_block(aad_mem, aad_len, aad_index, 0);
                    if (aad_index >= aad_len)
                        aad_done = 1;

                    // Allineo i segnali SOLO mentre mando un blocco:
                    last_block = force_last_block;
                    EOT = 0;

                end else if (!msg_done) begin
                    send_block(msg_mem, msg_len, msg_index, 1);
                    if (msg_index >= msg_len)
                        msg_done = 1;

                    last_block = 0;
                    EOT = force_EOT;
                end
            end



            if (ciphertext_valid) begin
                $fdisplay(debug_file, "CIPHERTEXT: %032x", ciphertext);
            end

            if (ready_tag) begin
                $fdisplay(debug_file, "TAG: %016x%016x", tag1, tag2);
            end

            if (done) begin
                // (opzionale) reset dei flag
                force_last_block = 0;
                force_EOT = 0;

                $display("Simulation DONE");
                $fclose(debug_file);
                $finish;
            end
        end

    end

    // === Helper task ===
    task send_block(
        input [7:0] mem[],
        input integer total_len,
        inout integer index,
        input integer data_type
    );
        integer chunk_size;
        integer i;
        reg [127:0] data_block;
        reg is_last_block;

        begin
            chunk_size = (total_len - index >= 16) ? 16 : (total_len - index);
            data_block = 0;

            // Calcola PRIMA se è l'ultimo blocco
            is_last_block = (index + chunk_size == total_len);

            for (i = 0; i < 16; i = i + 1) begin
                if (i < chunk_size) begin
                    data_block[127 - i*8 -: 8] = mem[index + i];
                end else begin
                    data_block[127 - i*8 -: 8] = 8'h00;
                end
            end

            // Setta i flag PRIMA di inviare
            if (data_type == 0 && is_last_block)
                force_last_block = 1;
            else if (data_type == 1 && is_last_block)
                force_EOT = 1;

            // Manda il blocco
            data_in = data_block;
            valid_data_in = 1;
            valid_bytes = chunk_size[3:0];

            // Avanza index
            index = index + chunk_size;
        end
    endtask





endmodule
