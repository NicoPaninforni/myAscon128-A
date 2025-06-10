s#Lo script di setup_env.sh deve essere lanciato con:
# source setup_env.sh (non con: ./setup_env.sh)

# Activate conda env
source /software/miniconda3/etc/profile.d/conda.sh
conda activate fusesoc-modern
# Add verilator to PATH
export PATH=/software/x-heep/verilator/4.210/bin:$PATH

# init design compiler:
source /eda/scripts/init_design_vision

#init questa_sim
export MODEL_TECH=/eda/Siemens/2024-25/RHELx86/QUESTA-CORE-PRIME_2024.3/questasim/linux_x86_64
source /eda/scripts/init_questa_2024.3