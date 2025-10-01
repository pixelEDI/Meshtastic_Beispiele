
/*
       _          _          _ _
 _ __ (_)_  _____| | ___  __| (_)
| '_ \| \ \/ / _ \ |/ _ \/ _` | |
| |_) | |>  <  __/ |  __/ (_| | |
| .__/|_/_/\_\___|_|\___|\__,_|_|
|_|
https://links.pixeledi.eu
send values via UART to heltec v3 meshtastic | 09.2025

*/

#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  while (!Serial)
    ; // Warten, bis Serial bereit ist

  Serial1.begin(115200);
}

void loop() {
  unsigned long sec = millis() / 1000;

  String msg = "Hello via UART: " + String(sec) + "s";

  // An USB-Serial ausgeben
  Serial.println(msg);

  // An UART1 senden
  Serial1.println(msg);

  delay(5000);
}
