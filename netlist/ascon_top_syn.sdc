###################################################################

# Created by write_sdc on Mon Jun  9 18:24:54 2025

###################################################################
set sdc_version 2.1

set_units -time ns -resistance kOhm -capacitance pF -voltage V -current mA
create_clock [get_ports clk]  -period 1  -waveform {0 0.5}
