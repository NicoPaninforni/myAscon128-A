from picoscope import ps5000a

try:
    ps = ps5000a.PS5000a()
    print("✅ PicoScope PS5000a connesso correttamente!")
    ps.close()
except OSError as e:
    print(f"❌ Errore apertura: {e}")
