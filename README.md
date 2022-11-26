## DeepSleep for **ESP32 Dev Module** in ARDUINO IDE

The Following steps must be taken:
1. Open Arduino IDE (Version 1 or 2)
2. Connect a Touch Pin with the GPIO4 of the ESP32
3. Plug in the ESP32 via the USB port of your computer
4. Chose the right settings for the Board and Port
5. Compile the code and load it onto your ESP32
6. Open the Serial monitor. If necessary, choose the right Baud Rate.

If you touch the Touch Pin, the ESP32 will wake up from the DeepSleep.
The measurement of the Power consumption during and out of the sleep mode will be added soon!


The Sleep Modes are documented here:
https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/system/sleep_modes.html
