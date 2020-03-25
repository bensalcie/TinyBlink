/*
  TinyBlink.h - Library for Blinking your LED'S with ease.
  Created by Benard Ngoda student at Moi University,+254704808070, 25/03/2020.
  Released into the public domain.
*/
#include "Arduino.h"
#include "TinyBlink.h"

TinyBlink::TinyBlink(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void TinyBlink::blink(int dur)
{
  digitalWrite(_pin, HIGH);
  delay(dur);
  digitalWrite(_pin, LOW);
  delay(dur);  
}

void TinyBlink::stop()
{
  digitalWrite(_pin, LOW);
 
}

void TinyBlink::blinkAtInterval(int dur,int interval)
{
  digitalWrite(_pin, HIGH);
  delay(dur);
  digitalWrite(_pin, LOW);
  delay(dur); 
   
    digitalWrite(_pin, LOW);
  delay(interval);

}