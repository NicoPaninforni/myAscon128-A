#verilator -Wall --cc ascon_top.sv --exe --trace --trace-structs tb.cpp --build

verilator -Wall --cc ascon_top.sv --exe --trace --trace-structs tb_auto.cpp tb_utils.cpp --build

./obj_dir/Vascon_top
#pkill gtkwave
#gtkwave dump.vcd waveform.gtkw &
python3 test_ascon.py > output.txt
echo "Confronto file:"
#diff <(head -n 100 debug_output.txt) <(head -n 100 output.txt)
diff debug_output.txt output.txt



