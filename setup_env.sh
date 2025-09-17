#Lo script di setup_env.sh deve essere lanciato con:
# source setup_env.sh (non con: ./setup_env.sh)

# Activate conda env
source /software/miniconda3/etc/profile.d/conda.sh
conda activate fusesoc-modern
# Add verilator to PATH
export PATH=/software/x-heep/verilator/4.210/bin:$PATH

# init design compiler:
source /eda/scripts/init_design_vision

# init di vivado:
source /eda/scripts/init_vivado_2022.2

#init questa_sim
export MODEL_TECH=/eda/Siemens/2024-25/RHELx86/QUESTA-CORE-PRIME_2024.3/questasim/linux_x86_64
source /eda/scripts/init_questa_2024.3

#python3 ascon_sweep.py   --par 1 2 3 5 32 --sec 1 2 3 5   --xor-per-block --plot --verbose   --timing-rpt build/myascon_ascon_top_1.0.0_0/synthesis-design_compiler/report/timing.rpt   --area-rpt   build/myascon_ascon_top_1.0.0_0/synthesis-design_compiler/report/area.rpt