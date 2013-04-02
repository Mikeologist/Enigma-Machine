#include <iostream>
#include "Reflector.h"
using namespace std;

char reflector[26] {'Q','Y','H','O','G','N','E','C','V','P','U','Z','T','F','D','J','A','X','W','M','K','I','S','R','B','L'};

Reflector::Reflector()
{
    /*for(int i = 0; i < 26; i++)
    {
        subValues[i] = i + 65;
    }*/
}

/*char* Reflector::getSubValues()
{
    return subValues;
}*/

char Reflector::getValueFor(char valInput)
{
    return reflector[(valInput - 65)];
}

/*void Reflector::setSubValues(char patch1, char patch2)
{
    subValues[patch1] = patch2;
    subValues[patch2] = patch1;
}*/