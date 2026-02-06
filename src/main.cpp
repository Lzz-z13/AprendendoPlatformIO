#include <Arduino.h>
#include <pot.h>
#include "config.h"

pot myPot(34);

void setup() {
  Serial.begin(115200);
  myPot.begin();


};

void loop(){
  Serial.print("Potenciometro value: " + myPot.read());
  delay(1000);

};