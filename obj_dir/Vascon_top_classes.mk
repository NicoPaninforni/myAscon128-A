# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vascon_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vascon_top \
	Vascon_top___024root__DepSet_hd5d89e7c__0 \
	Vascon_top___024root__DepSet_h24606f98__0 \
	Vascon_top___024root__DepSet_h24606f98__1 \
	Vascon_top___024root__DepSet_h24606f98__2 \
	Vascon_top_ascon_sbox_d2__DepSet_h9a7e00ea__0 \
	Vascon_top_ascon_sbox_d2__DepSet_h9a7e00ea__1 \
	Vascon_top_ascon_sbox_d2__DepSet_h6abb0522__0 \
	Vascon_top_ascon_sbox_d2__DepSet_h6abb0522__1 \
	Vascon_top_ascon_sbox_d2__DepSet_h6abb0522__2 \
	Vascon_top_ascon_sbox_d2__DepSet_h6abb0522__3 \
	Vascon_top_ascon_sbox_d2__DepSet_h6abb0522__4 \
	Vascon_top_ascon_sbox_d2__DepSet_h6abb0522__5 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vascon_top___024root__Slow \
	Vascon_top___024root__DepSet_hd5d89e7c__0__Slow \
	Vascon_top___024root__DepSet_h24606f98__0__Slow \
	Vascon_top___024root__DepSet_h24606f98__1__Slow \
	Vascon_top_ascon_sbox_d2__Slow \
	Vascon_top_ascon_sbox_d2__DepSet_h9a7e00ea__0__Slow \
	Vascon_top_ascon_sbox_d2__DepSet_h9a7e00ea__1__Slow \
	Vascon_top_ascon_sbox_d2__DepSet_h9a7e00ea__2__Slow \
	Vascon_top_ascon_sbox_d2__DepSet_h9a7e00ea__3__Slow \
	Vascon_top_ascon_sbox_d2__DepSet_h9a7e00ea__4__Slow \
	Vascon_top_ascon_sbox_d2__DepSet_h9a7e00ea__5__Slow \
	Vascon_top_ascon_sbox_d2__DepSet_h9a7e00ea__6__Slow \
	Vascon_top_ascon_sbox_d2__DepSet_h9a7e00ea__7__Slow \
	Vascon_top_ascon_sbox_d2__DepSet_h6abb0522__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vascon_top__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vascon_top__Syms \
	Vascon_top__Trace__0__Slow \
	Vascon_top__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
