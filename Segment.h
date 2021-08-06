#if !defined(Segment_h)
#define Segment_h




#include <Arduino.h>
class Segment
{
private:
    int a, b, c, d, e, f, g;
    // int number;

public:
    Segment(int a, int b, int c, int d, int e, int f, int g);
    void setNumber(int number);
    ~Segment();
};


#endif // Segment_h