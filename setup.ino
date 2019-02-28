int time; //declaração da variável 

#include <Arduino.h>
#include "manage_blink.h"

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600); //definir a velocidade de transferência de dados 
  Serial.println("Vers 1.3");
  time = 0;
}

void loop() {
  blink(time);
}
