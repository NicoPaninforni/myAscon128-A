############################################
#
# Auto-generated project tcl file:
#  * sets up variable
#  * runs customized script
#
############################################
sh date

set TOP_MODULE ascon_top
set DC_SCRIPT synth.tcl

set READ_SOURCES myascon_ascon_top_1.0.0_0-read-sources

set SCRIPT_DIR ../../../synth

set REPORT_DIR report
sh mkdir -p ${REPORT_DIR}



############################################
#
# Run custom script
#
############################################
source ${SCRIPT_DIR}/${DC_SCRIPT}

############################################
#
#  all done -- exit
#
############################################
sh date