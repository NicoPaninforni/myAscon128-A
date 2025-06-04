rm -rf work
vlib work

g++ -std=c++17 -O2 -o data_maker data_maker.cpp tb_utils.cpp

./data_maker

vsim -c -do vsim.do | tee vsim.log
#pkill gtkwave
#gtkwave dump.vcd waveform.gtkw &
python3 test_ascon.py > output.txt

#echo "Confronto file:"
#diff <(head -n 100 debug_output.txt) <(head -n 100 output.txt)
#diff debug_output.txt output.txt




