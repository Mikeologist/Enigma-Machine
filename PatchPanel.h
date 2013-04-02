#include <iostream>
using namespace std;

class PatchPanel
{
public:
    PatchPanel();
    char* getSubValues();
    char getValueFor(char valInput);
    void setSubValues(char patch1, char patch2);
    string toString();
};
