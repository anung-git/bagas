
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
    digitalWrite(pinB, LOW);
}
void Motor::reverse()
{
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, HIGH);
}
void Motor::stop()
{
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
}
Motor::~Motor()
{
}
