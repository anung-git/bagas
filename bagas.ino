#include <Arduino.h>
#include "Motor.h"
#include "Segment.h"
#include "Button.h"

//constant variable pin
const int limt1 = A0;
const int limt2 = A1;
const int limt3 = A2;
const int limt4 = A3;
const int limt5 = A4;
const int limt6 = A5;
const int limt7 = A6;

const int segA = 8;
const int segB = 7;
const int segC = 2;
const int segD = 4;
const int segE = 3;
const int segF = 6;
const int segG = 5;

const int motorA = 10;
const int motorB = 11;

const int up = 9;
const int down = 12;
const unsigned long motorOnDelay = 1000;

//var init
unsigned long motorLastOn;
int sensor[] = {limt1, limt2, limt3, limt4, limt5, limt6, limt7};
int index;

// create object
Motor motor = Motor(motorA, motorB);
Button tombolUp = Button(up);
Button tombolDown = Button(down);
Segment segmen = Segment(segA, segB, segC, segD, segE, segF, segG);
void setup()
{
  tombolUp.changeMode(FALLING);
  tombolDown.changeMode(FALLING);
  for (int i = 0; i < 7; i++)
  {
    pinMode(sensor[i], INPUT_PULLUP);
  }
}

void loop()
{

  for (int i = 0; i < 7; i++)
  {
    if (digitalRead(sensor[i]) == LOW)
    {
      index = i + 1;
      segmen.setNumber(index);
    }
  }

  if (millis() > motorLastOn + motorOnDelay)
  {
    motor.stop();
  }

  if (tombolUp.getValue() == LOW)
  {

    motor.forward();
    motorLastOn = millis();
  }
  if (tombolDown.getValue() == LOW)
  {
    motor.reverse();
    motorLastOn = millis();
  }
  tombolDown.loop();
  tombolUp.loop();
}
