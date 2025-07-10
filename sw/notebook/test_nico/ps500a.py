from picoscope import ps5000a

try:
    ps = ps5000a.PS5000a()  # Questo chiama direttamente il driver libps5000a
    print("✅ Dispositivo aperto con successo!")
except OSError as e:
    print(f"❌ Errore apertura: {e}")
