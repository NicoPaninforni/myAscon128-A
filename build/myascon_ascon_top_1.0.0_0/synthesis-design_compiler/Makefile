SHELL=/bin/bash
NAME := myascon_ascon_top_1.0.0_0
REPORT_DIR := report


all:
			mkdir -p ${REPORT_DIR}
			dc_shell-t -f ${NAME}.tcl |& tee ${REPORT_DIR}/synth.log