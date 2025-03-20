#ifdef ARDUINO_ARCH_ESP8266
void listFiles(void);
#endif

#ifdef ESP32
void listFiles(void);
void listDir(fs::FS &fs, const char * dirname, uint8_t levels);
#endif