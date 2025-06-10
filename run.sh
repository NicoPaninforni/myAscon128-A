#!/bin/bash

#comandi:
# Simulazione:  rm -rf build/myascon_ascon_top_1.0.0_0
#               rm -rf ~/.cache/fusesoc
#               fusesoc run --target=simulation myascon:ascon_top:1.0.0

echo "==========================="
echo "       myASCON Runner      "
echo "==========================="
echo "Cosa vuoi fare?"
echo "1) Simulazione"
echo "2) Sintesi con design compiler"
echo "3) Simulazione post-sintesi"
echo "4) Esci"
echo "==========================="

read -p "Scelta [1-4]: " scelta

case $scelta in
    1)
        echo "👉 Avvio simulazione con Fusesoc..."
        fusesoc run --target=simulation myascon:ascon_top:1.0.0

        echo "Verifica rispetto al golden model: test_ascon.py:"
        python3 test_ascon.py > output.txt

        # Confronto dei file
        diff_output=$(diff output.txt ./build/myascon_ascon_top_1.0.0_0/simulation-verilator/debug_output.txt)

        if [ $? -eq 0 ]; then
            echo "✅ Perfetto, test superato con successo!"
        else
            echo "❌ Differenze trovate!"
            echo "Prima differenza:"
            echo "$diff_output" | head -n 1
        fi
        ;;
    2)
        echo "👉 Avvio sintesi con Design Compiler..."
        # Esempio comando per Design Compiler:
        cd synth/
        dc_shell -f synth.tcl | tee synth.log
        cd ../
        ;;
    3)
        echo "👉 Simulazione post-sintesi..."
        # Esempio comando post-sintesi:
        # magari usa un netlist simulabile
        # puoi cambiare questo con il tuo flow post-sintesi
        # es:
        # fusesoc run --target=post_synth_simulation myascon:ascon_top:1.0.0
        ;;
    4)
        echo "Uscita. 👋"
        exit 0
        ;;
    *)
        echo "❌ Scelta non valida. Esco."
        exit 1
        ;;
esac