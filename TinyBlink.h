/*
  TinyBlink.h - Library for Blinking your LED'S with ease.
  Created by Benard Ngoda student at Moi University,+254704808070, 25/03/2020.
  Released into the public domain.
*/
#ifndef TinyBlink_h
#define TinyBlink_h

#include "Arduino.h"

class TinyBlink
{
public:
	TinyBlink(int pin);
	 void blink(int duration);
     void stop();
     void blinkAtInterval(int duration,int inteval);
     private:
    int _pin;
};

#endif