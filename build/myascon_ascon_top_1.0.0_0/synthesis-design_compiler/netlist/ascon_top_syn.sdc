###################################################################

# Created by write_sdc on Thu Jul 10 18:19:03 2025

###################################################################
set sdc_version 2.1

set_units -time ns -resistance kOhm -capacitance pF -voltage V -current mA
create_clock [get_ports clk]  -period 1  -waveform {0 0.5}
