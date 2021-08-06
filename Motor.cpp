
#include "Motor.h"
Motor::Motor(int pinA, int pinB)
{
    pinMode(pinA, OUTPUT);
    pinMode(pinB, OUTPUT);
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
    this->pinA = pinA;
    this->pinB = pinB;
}

void Motor::forward()
{
    digitalWrite(pinA, HIGH);
    digitalWrite(pinA, LOW);
}
void Motor::reverse()
{
    digitalWrite(pinA, LOW);
    digitalWrite(pinA, HIGH);
}
void Motor::stop()
{
    digitalWrite(pinA, LOW);
    digitalWrite(pinA, LOW);
}
Motor::~Motor()
{
}
