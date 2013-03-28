#include <iostream>
using namespace std;

class Rotors
{
public:
    Rotors();
    void setRotorPositions(char r1, char r2, char r3);
    void tick();
    char calcForwardValue(char rawValue);
    char calcBackwardValue(char rawValue);
};
