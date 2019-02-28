#include "Arduino.h"

extern int time;

void blink(int t){
  if(t>=0 && t<1000){
     time=t+100;
    digitalWrite(13,1);
    delay(time);
    digitalWrite(13,0);
    delay(time);
  }else if(t>=1000){
    time=-t; 
  }else if(t< 0){
    time = t+100;
    digitalWrite(13,1);
    delay(-time);
    digitalWrite(13,0);
    delay(-time);
  }
}
