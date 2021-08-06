
#include"Segment.h"
void Segment::setNumber(int number)
{
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    switch (number)
    {
    case 0:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(d, LOW);
        digitalWrite(e, LOW);
        digitalWrite(f, LOW);
        break;
    case 1:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        break;
    case 2:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(d, LOW);
        digitalWrite(e, LOW);
        digitalWrite(g, LOW);
        break;
    case 3:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(d, LOW);
        digitalWrite(g, LOW);
        break;
    case 4:
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        break;
    case 5:
        digitalWrite(a, LOW);
        digitalWrite(c, LOW);
        digitalWrite(d, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        break;
    case 6:
        digitalWrite(a, LOW);
        digitalWrite(c, LOW);
        digitalWrite(d, LOW);
        digitalWrite(e, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        break;
    case 7:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        break;
    case 8:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(d, LOW);
        digitalWrite(e, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        break;
    case 9:
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(d, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        break;
    default:
        break;
    }
}
Segment::Segment(int a, int b, int c, int d, int e, int f, int g)
{
    pinMode(a, OUTPUT);
    pinMode(b, OUTPUT);
    pinMode(c, OUTPUT);
    pinMode(d, OUTPUT);
    pinMode(e, OUTPUT);
    pinMode(f, OUTPUT);
    pinMode(g, OUTPUT);
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->e = e;
    this->f = f;
    this->g = g;
}

Segment::~Segment()
{
}
