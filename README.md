# 🛡️ MyASCON128-A – Progetto RTL + ASIC Flow

🚨 **IMPORTANTE**:  
Tutti i comandi del Makefile devono essere eseguiti sul server **Saruman** (non su Radagast).  
Per la generazione del bitstream FPGA invece, si utilizzerà **Radagast** (vedi sezione dedicata).

---

Questo repository contiene l'implementazione RTL di **ASCON-128**, con supporto a:
- ✅ Simulazione RTL
- ✅ Sintesi ASIC tramite **Design Compiler**
- ✅ Verifica automatica contro un **golden model Python**
- ✅ Simulazione post-sintesi
- ⚙️ Supporto a simulazione wrapper FPGA

---

## 📁 Struttura principale

| Cartella/File               | Descrizione                                       |
|----------------------------|---------------------------------------------------|
| `rtl/`                     | Codice RTL Verilog/SystemVerilog                 |
| `build/`                   | Directory generata automaticamente               |
| `netlist/`                 | Netlist sintetizzata (output Design Compiler)    |
| `synth/report/`            | Report di sintesi generati da Design Compiler    |
| `test_ascon.py`            | Golden model Python                              |
| `tb/`                      | Testbench C++ via Verilator                      |
| `Makefile`                 | Automazione completa del flow                    |

---

## ⚙️ Setup iniziale

> Prima di eseguire **qualsiasi comando**, attiva l’ambiente corretto (Questasim, DC, ecc.) con:

```bash
source setup_env.sh

## 🧵 `make fpga_bitstream`

Genera il bitstream del core per il target FPGA (CW305) utilizzando Vivado.

📦 Il file risultante viene salvato automaticamente in:

build/myascon_ascon_top_1.0.0_0/cw305-ascon-vivado/myascon_ascon_top_1.0.0_0.bit


🔁 Per comodità e chiarezza, copiarlo nella directory `fpga/bitstream`:

```bash
cp build/myascon_ascon_top_1.0.0_0/cw305-ascon-vivado/myascon_ascon_top_1.0.0_0.bit \
   fpga/bitstream/myascon_ascon_top_1.0.0_0.bit

⚙️ Esecuzione esperimenti Side-Channel
Per programmare l'FPGA ed eseguire test con il framework Side-Channel Dojo:

Spostarsi nella cartella notebook:

```bash
cd ../Side-Channel-Dojo/sw/notebook/

Copiare il bitstream nella directory corretta:

bash
Copia
Modifica
cp ../../../myAscon128-A/fpga/bitstream/myascon_ascon_top_1.0.0_0.bit \
   ../../hw/fpga/bitstream/cw305_top.bit

Lanciare il notebook di test:

code sca_test.ipynb

🧠 Nota importante:
Se si riscontrano problemi nella sezione: ## Picoscope and CW305 initialization
verificare che:   -> La board CW305 sia correttamente collegata via USB
                  -> I driver siano liberi e non occupati
                  -> In caso di errore, riavviare il kernel del notebook per liberare eventuali risorse bloccate

✅ A questo punto, l'FPGA può essere programmato e il core testato per esperimenti di side-channel analysis.


