
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
#include <ArduinoJson.h>
#include <Modulino.h>

ModulinoDistance distance;
ModulinoThermo thermo;

void setup() {
  Serial.begin(115200);
  Serial1.begin(115200);

  Modulino.begin();
  distance.begin();
  thermo.begin();
}

void loop() {

  int measure = 0;

  if (distance.available()) {
    measure = distance.get();
    Serial.println(measure);
  }

  float celsius = thermo.getTemperature();
  float humidity = thermo.getHumidity();

  // https://arduinojson.org/
  JsonDocument doc;

  doc["distance"] = measure;
  doc["temperature"] = celsius;
  doc["humidity"] = humidity;

  serializeJson(doc, Serial);
  serializeJson(doc, Serial1);

  // String msg = String(measure);
  //
  // // An USB-Serial ausgeben
  // Serial.println(msg);
  // // An UART1 senden
  // Serial1.println(msg);
  delay(5000);
}
