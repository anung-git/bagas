
#include "Segment.h"
void Segment::setNumber(int number)
{
    if (number != this->number)
    {
        this->number = number;
        this->writeSegment(number);
    }
}

void Segment::mode(bool aktif)
{
    this->aktif = aktif;
}
void Segment::writeSegment(int number)
{

    digitalWrite(a, (1 - aktif));
    digitalWrite(b, (1 - aktif));
    digitalWrite(c, (1 - aktif));
    digitalWrite(d, (1 - aktif));
    digitalWrite(e, (1 - aktif));
    digitalWrite(f, (1 - aktif));
    digitalWrite(g, (1 - aktif));
    switch (number)
    {
    case 0:
        digitalWrite(a, aktif);
        digitalWrite(b, aktif);
        digitalWrite(c, aktif);
        digitalWrite(d, aktif);
        digitalWrite(e, aktif);
        digitalWrite(f, aktif);
        break;
    case 1:
        digitalWrite(c, aktif);
        digitalWrite(b, aktif);
        break;
    case 2:
        digitalWrite(a, aktif);
        digitalWrite(b, aktif);
        digitalWrite(d, aktif);
        digitalWrite(e, aktif);
        digitalWrite(g, aktif);
        break;
    case 3:
        digitalWrite(a, aktif);
        digitalWrite(b, aktif);
        digitalWrite(c, aktif);
        digitalWrite(d, aktif);
        digitalWrite(g, aktif);
        break;
    case 4:
        digitalWrite(b, aktif);
        digitalWrite(c, aktif);
        digitalWrite(f, aktif);
        digitalWrite(g, aktif);
        break;
    case 5:
        digitalWrite(a, aktif);
        digitalWrite(c, aktif);
        digitalWrite(d, aktif);
        digitalWrite(f, aktif);
        digitalWrite(g, aktif);
        break;
    case 6:
        digitalWrite(a, aktif);
        digitalWrite(c, aktif);
        digitalWrite(d, aktif);
        digitalWrite(e, aktif);
        digitalWrite(f, aktif);
        digitalWrite(g, aktif);
        break;
    case 7:
        digitalWrite(a, aktif);
        digitalWrite(b, aktif);
        digitalWrite(c, aktif);
        break;
    case 8:
        digitalWrite(a, aktif);
        digitalWrite(b, aktif);
        digitalWrite(c, aktif);
        digitalWrite(d, aktif);
        digitalWrite(e, aktif);
        digitalWrite(f, aktif);
        digitalWrite(g, aktif);
        break;
    case 9:
        digitalWrite(a, aktif);
        digitalWrite(b, aktif);
        digitalWrite(c, aktif);
        digitalWrite(d, aktif);
        digitalWrite(f, aktif);
        digitalWrite(g, aktif);
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
