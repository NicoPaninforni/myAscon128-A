# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vascon_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vascon_top \
	Vascon_top___024root \
	Vascon_top___024root__1 \
	Vascon_top___024root__2 \
	Vascon_top___024root__3 \
	Vascon_top___024root__4 \
	Vascon_top___024root__5 \
	Vascon_top___024unit \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vascon_top___024root__Slow \
	Vascon_top___024root__1__Slow \
	Vascon_top___024root__2__Slow \
	Vascon_top___024root__3__Slow \
	Vascon_top___024root__4__Slow \
	Vascon_top___024root__5__Slow \
	Vascon_top___024root__6__Slow \
	Vascon_top___024root__7__Slow \
	Vascon_top___024root__8__Slow \
	Vascon_top___024root__9__Slow \
	Vascon_top___024root__10__Slow \
	Vascon_top___024root__11__Slow \
	Vascon_top___024root__12__Slow \
	Vascon_top___024root__13__Slow \
	Vascon_top___024root__14__Slow \
	Vascon_top___024root__15__Slow \
	Vascon_top___024unit__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vascon_top__Trace \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vascon_top__Syms \
	Vascon_top__Trace__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
