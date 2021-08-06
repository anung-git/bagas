#if !defined(Motor_h)
#define Motor_h

#include <Arduino.h>
class Motor
{
private:
    int pinA, pinB;

public:
    void forward();
    void reverse();
    void stop();
    Motor(int pinA, int pinB);
    ~Motor();
};



#endif // Motor_h

