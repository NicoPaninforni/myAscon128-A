#############################
# ----- CONFIGURATION ----- #
#############################

# General configuration
MAKE               = make
BUILD_DIR         ?= $(realpath .)/build
CORE_NAME         ?= myascon:ascon_top:1.0.0

# Get the absolute path
mkfile_path := $(shell dirname "$(realpath $(firstword $(MAKEFILE_LIST)))")
$(info $$ You are executing from: $(mkfile_path))

#######################
# ----- TARGETS ----- #
#######################

.PHONY: print_targets
print_targets:
	@echo ""
	@echo "🎯 Target disponibili:"
	@echo "  make simulation_build        → build simulazione"
	@echo "  make simulation_run          → run simulazione"
	@echo "  make simulation_verify       → verifica risultati"
	@echo "  make simulation              → tutto (build + run + verify)"
	@echo "  make synthesis               → sintesi + update netlist + reports"
	@echo "  make update_netlist          → copia netlist"
	@echo "  make update_synth_reports    → copia reports"
	@echo "  make post_synth_sim          → simulazione post-sintesi"
	@echo "  make all                     → flow completo"
	@echo "  make clean                   → pulizia"
	@echo ""


# Target 1 - Simulazione
.PHONY: simulation_build
simulation_build: .check-fusesoc
	@echo "👉 Pulizia build e cache..."
	rm -rf $(BUILD_DIR)/myascon_ascon_top_1.0.0_0
	rm -rf ~/.cache/fusesoc
	@echo "👉 Avvio build simulazione..."
	fusesoc run --target=simulation --setup $(CORE_NAME)
	@echo "✅ Build simulazione completata."

.PHONY: simulation_run
simulation_run: .check-fusesoc
	@echo "👉 Avvio simulazione..."
	fusesoc run --target=simulation $(CORE_NAME)
	@echo "✅ Simulazione completata."

.PHONY: simulation_verify
.PHONY: simulation_verify
simulation_verify:
	@echo "👉 Verifica rispetto al golden model..."
	python3 test_ascon.py > output.txt
	@echo "👉 Confronto risultati:"
	@diff output.txt $(BUILD_DIR)/myascon_ascon_top_1.0.0_0/simulation-verilator/debug_output.txt > diff_output.txt || true
	@if [ -s diff_output.txt ]; then \
		echo "❌ Differenze trovate! Vedi ./diff_output.txt"; \
		echo "Hai cambiato i parametri nel file ./tb/tb_auto.cpp? -> PAR e d devono essere uguali al file ./rtl/ascon_params.sv"; \
	else \
		echo "✅ Perfetto, test superato con successo!"; \
	fi

.PHONY: simulation
simulation: simulation_build simulation_run simulation_verify
	@echo "🎉 Simulazione completa terminata con successo!"


# Target 2 - Sintesi con Design Compiler
.PHONY: synthesis
synthesis: .check-dc
	@echo "Avvio sintesi con Design Compiler..."
	fusesoc run --target=synthesis myascon:ascon_top:1.0.0
	@echo "✅ Sintesi completata."
	@$(MAKE) update_netlist
	@$(MAKE) update_synth_reports

.PHONY: update_netlist
update_netlist:
	@echo "Aggiorno netlist/ascon_top_syn.v..."
	mkdir -p netlist
	cp $(BUILD_DIR)/myascon_ascon_top_1.0.0_0/synthesis-design_compiler/netlist/ascon_top_syn.* netlist/
	@echo "✅ Netlist aggiornata."

.PHONY: update_synth_reports
update_synth_reports:
	@echo "Aggiorno report di sintesi..."
	mkdir -p synth/report
	rsync -av --delete $(BUILD_DIR)/myascon_ascon_top_1.0.0_0/synthesis-design_compiler/report/ synth/report/
	@echo "✅ Report aggiornati."



# Target 3 - Simulazione post-sintesi (placeholder)
.PHONY: post_synth_sim
post_synth_sim: .check-fusesoc update_netlist
	@echo "Avvio simulazione post-sintesi..."
	fusesoc run --target=postsynth_simulation $(CORE_NAME)
	@echo "✅ Post-synthesis sim completata."


# Target 4 - Pulizia
.PHONY: clean
clean:
	@echo "👉 Pulizia completa..."
	rm -rf $(BUILD_DIR)
	rm -rf ~/.cache/fusesoc
	rm -f output.txt
	@echo "✅ Pulizia completata."

.PHONY: all
all: synthesis post_synth_sim
	@echo "Flow completo terminato con successo!"


# Utilities
# ---------
.PHONY: .check-fusesoc
.check-fusesoc:
	@if ! command -v fusesoc >/dev/null 2>&1; then \
		echo "### ERROR: 'fusesoc' non trovato! Hai attivato l'environment giusto?"; \
		exit 1; \
	fi

.PHONY: .check-dc
.check-dc:
	@if ! command -v dc_shell >/dev/null 2>&1; then \
		echo "### ERROR: 'dc_shell' non trovato! È nel PATH? Hai attivato l'ambiente Design Compiler?"; \
		exit 1; \
	fi
