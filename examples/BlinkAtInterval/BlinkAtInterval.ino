/*
  TinyBlink.h - Library for Blinking your LED'S with ease.
  Created by Benard Ngoda student at Moi University,+254704808070, 25/03/2020.
  Released into the public domain.
*/

//include this library
#include <TinyBlink.h>

//Create an instance of TinyBlink 
TinyBlink tb(2);// 2 For this case can be any pin you wish to blink from your board.

void setup() {
  // pins used are already setup for you,you dont have to write pinMode again
//no need for pinMode again
}

void loop() {
  //use Previously defined Tiny  blink instance i.e tb and call Blink.
   //blinkAtInterval(); function expects two parameters ,integer which are the duration of blink and the interval at which you want your blink to happen
tb.blinkAtInterval(50,2000);




}
