Per lanciare la simulazione basta lanciare i seguenti comandi:

1. Fornire i permessi di eseguzione allo script:
   >> chmod +x run.sh

Lo script run.sh gestite la compilazione del modulo ascon_top.sv e del tb_auto.cpp, quest'ultimo crea un file con dei dati di lunghezza e contenuto randomici, che vengono cambiati ad ogni simulazione e sono salvati nel file "data.txt". Dopo di che crea i risultati del modulo e vengono salvati in "debug_output.txt" e viene fatto il diff con il file "output.txt" generato dal golden model python test_ascon.py.

NOTA: prima di eseguire lo script verificare che il percorso assoluto (con i percorsi relativi mi dava problemi) del file "data.txt" a riga 527 del file test_ascon.py sia opportunamente aggiornato!

NOTA: è possibile testare l'architettura con i diversi tipi di parallelismo (PAR), a partire da 1 fino a PAR_MAX che è (64/(d+1) + 1), bisogna cambiare solo il parametro PAR sia in ascon_top.sv e in tb_auto.cpp

2. Per eseguire lo script lanciare:
    >> ./run.sh

