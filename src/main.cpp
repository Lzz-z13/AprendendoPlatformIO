#include <Arduino.h>
#include <pot.h>
#include "config.h"

pot myPot(POT_PIN);

void setup() {
  Serial.begin(115200);
  myPot.begin();
};

void loop(){
  Serial.print("Potenciometro value: " + myPot.read());
  delay(1000);
  Serial.print("Filtered Value: " + myPot.readFiltered());
  delay(1000);
};