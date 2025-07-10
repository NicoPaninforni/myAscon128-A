import ctypes

lib = ctypes.cdll.LoadLibrary("libps5000a.so")

handle = ctypes.c_int16()
status = lib.ps5000aOpenUnit(ctypes.byref(handle), None)

# Se riceviamo errore 0x120 (288), ritentiamo con apertura forzata
PICO_USB3_0_DEVICE_NON_USB3_0_PORT = 0x120
PICO_OK = 0

if status == PICO_USB3_0_DEVICE_NON_USB3_0_PORT:
    print("⚠️  USB 3.0 device on USB 2.0 port — retrying with openUnitEx...")
    openUnitEx = lib.ps5000aOpenUnit
    openUnitEx.argtypes = [ctypes.POINTER(ctypes.c_int16), ctypes.c_void_p]
    status = openUnitEx(ctypes.byref(handle), None)

print("Status:", status)
print("Handle returned:", handle.value)
