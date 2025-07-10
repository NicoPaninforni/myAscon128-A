# 🛡️ MyASCON128-A – Progetto RTL + ASIC Flow

Questo repository contiene l'implementazione RTL di ASCON-128, con supporto a:
- Simulazione RTL
- Sintesi ASIC tramite Design Compiler
- Verifica automatica contro un modello Python golden
- Simulazione post-sintesi

## 📁 Struttura principale

- `rtl/` → Codice RTL Verilog/SystemVerilog
- `build/` → Directory di build automatica
- `netlist/` → Output della sintesi ASIC (netlist)
- `synth/report/` → Report generati dalla sintesi
- `test_ascon.py` → Golden model per confronto cifratura
- `tb/` → Testbench C++ (tramite Verilator)
- `Makefile` → Automazione completa del flusso

---

## ⚙️ Setup iniziale

> Esegui questo comando **prima di tutto** per attivare l’ambiente (tools come Questasim, Design Compiler, ecc.):

```bash
source setup_env.sh


### ▶️ `make simulation`

Esegue l'intero flusso di simulazione RTL:

1. **Build della simulazione** usando FuseSoC + Verilator  
2. **Esecuzione** del testbench C++ (`tb_auto.cpp`) che genera:
   - Dati casuali (valore e lunghezza)
   - Input/output per il DUT (Device Under Test)
3. **Verifica** tramite confronto automatico con il golden model Python

📁 **File coinvolti**:
- Golden model:  
  `/home/thesis/nico.paninforni/progetti_hdl/myAscon128-A/test_ascon.py`
- Testbench C++:  
  `/home/thesis/nico.paninforni/progetti_hdl/myAscon128-A/build/myascon_ascon_top_1.0.0_0/simulation-verilator/src/myascon_ascon_top_1.0.0_0/tb/tb_auto.cpp`

⚠️ **Attenzione**:  
Verifica che i parametri usati nel `tb_auto.cpp` siano **coerenti** con quelli nel file:

```
rtl/ascon_params.sv
```

(In futuro, il TB leggerà i parametri direttamente dal file SystemVerilog)


### 🛠️ `make synthesis`

Esegue la sintesi ASIC del core RTL utilizzando **Design Compiler** (Synopsys).

🔧 **Operazioni effettuate**:
1. Lancia la sintesi del core tramite FuseSoC
2. Genera la **netlist sintetizzata**
3. Copia automaticamente:
   - La **netlist** in:  
     `/home/thesis/nico.paninforni/progetti_hdl/myAscon128-A/netlist`
   - I **report di sintesi** in:  
     `/home/thesis/nico.paninforni/progetti_hdl/myAscon128-A/synth/report`

⚠️ Assicurati di aver attivato l’ambiente Design Compiler (`dc_shell` nel PATH) prima di lanciare il comando.


### 🧪 `make post_synth_sim`

Esegue una simulazione post-sintesi a partire dalla netlist generata da **Design Compiler**.  
Viene usata la netlist `ascon_top_syn.v` in ambiente Verilator per verificare che il comportamento del design sintetizzato sia coerente con il modello RTL.

🔍 Utile per:
- Verificare la **correttezza funzionale** della netlist
- Stimare eventuali discrepanze dovute all'inserimento di ottimizzazioni o modifiche del sintetizzatore

⚙️ Precondizioni:
- La netlist deve essere già aggiornata (generata tramite `make synthesis`)

---

### 🔧 EXTRA: Simulazione Wrapper FPGA (non inclusa nel Makefile)

📌 Questa simulazione è separata e non è attualmente gestita dal `Makefile`.

- ❗ Supporta **al massimo 128 bit** di AAD e MSG
- 📁 I file wrapper specifici per il progetto FPGA sono in:  
  `./fpga`
- 📁 Il testbench corrispondente si trova in:  
  `./fpga/tb`  
  → Produce un file di **dump VCD** (`dump.vcd`)

🔄 **Consiglio**: converti il file `dump.vcd` in formato `fst` (più leggero) con:
```bash
vcd2fst dump.vcd dump.fst
```

👀 Poi visualizza le waveform con:
```bash
gtkwave dump.fst wave.gtk &
```

💡 Consigliato per un'analisi visiva del comportamento del wrapper sintetizzato su FPGA.

💻 Per la generazione del bitstream FPGA, ci sposteremo sul server `radagast.polito.it`, in quanto lì sono disponibili i file di configurazione `part` e l'installazione completa di **Vivado**.
