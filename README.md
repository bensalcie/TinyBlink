# TinyBlink
An Arduino library that lets you blink your Circuits with ease. 
This is a lightweight library that helps you overcome the redundant codes to switch on/off LED'S in your arduino projects.
  <p float="center">
  <img src="https://github.com/bensalcie/Agri-Sasa/blob/master/IEEE%20MADC%202019%20FILES/Sccreenshots/arduino.png" width="100%"  />
  </p>

# Installation Guidelines.
This library works with Arduino IDE and and expects that you have some arduino basics.
To install this library on your IDE, Clone or Download this repository:
Locate the Zip file downloaded:
1.Go to arduino IDE-> Sketch->Include library->Add .zip library.
2.All the examples in this library will be added to your ide.
3. Close your IDE and restart it.

# How to use it.
To use this lbrary in your project, go to sketch->Include library-> Scroll upto TinyBlink.
Or you can use it from the examples already existing.
Here is a basic usage to qwickly turn LED in a flashy way at 50 Miliseconds between an Interval of 2 Seconds.


    /*
      Library for Blinking your LED'S with ease.
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

[Examples Here](https://github.com/bensalcie/TinyBlink/tree/master/examples)
