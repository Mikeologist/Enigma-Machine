#include <iostream>
#include "Rotors.h"
using namespace std;

int r1Tick = 0,
    r2Tick = 0,
    r3Tick = 0;
char r1Values[26] {'J','G','D','Q','O','X','U','S','C','A','M','I','F','R','V','T','P','N','E','W','K','B','L','Z','Y','H'},
     r2Values[26] {'N','T','Z','P','S','F','B','O','K','M','W','R','C','J','D','I','V','L','A','E','Y','U','X','H','G','Q'},
     r3Values[26] {'J','V','I','U','B','H','T','C','D','Y','A','K','E','Q','Z','P','O','S','G','X','N','R','M','W','F','L'};

Rotors::Rotors()
{
    
}

void Rotors::setRotorPositions(char r1, char r2, char r3)
{
    r1Tick = r1 - 65;
    r2Tick = r2 - 65;
    r3Tick = r3 - 65;
}

void Rotors::tick()
{
    r1Tick++;
    
    if(r1Tick == 17) //r1Tick == 'R'
    {
        r2Tick++;
        
        if(r2Tick == 5) // r2Tick == 'F'
        {
            r3Tick++;
            
            if(r3Tick == 26)
            {
                r3Tick = 0;
            }
        }
        else if(r2Tick == 26)
        {
            r2Tick = 0;
        }
    }
    else if(r1Tick == 26)
    {
        r1Tick = 0;
    }
}

char Rotors::calcForwardValue(char rawValue)
{
    int convInt;
    char convChar;
    
    
    convInt  = rawValue - 65; //convert char to int equivilent
    
    convInt  = (convInt + r1Tick) % 26;
    convChar = r1Values[convInt];
    convInt  = convChar - 65;
    convInt  = ((convInt - r1Tick) + 26) % 26;
    
    convInt  = (convInt + r2Tick) % 26;
    convChar = r2Values[convInt];
    convInt  = (convChar - 65);
    convInt  = ((convInt - r2Tick) + 26) % 26;
    
    convInt  = (convInt + r3Tick) % 26;
    convChar = r3Values[convInt];
    convInt  = convChar - 65;
    convInt  = ((convInt - r3Tick) + 26) % 26;
    
    convChar = convInt + 65;
    return convChar;
}

char Rotors::calcBackwardValue(char rawValue)
{
    int convInt;
    char convChar;
    
    convInt  = rawValue - 65; //convert char to int equivilent
    
    convChar  = ((convInt + r3Tick) % 26) + 65;
    for(int i = 0; i < 26; i++)
    {
        if(r3Values[i] == convChar)
        {
            convInt = i;
            break;
        }
    }
    convInt  = ((convInt - r3Tick) + 26) % 26;
    
    convChar  = ((convInt + r2Tick) % 26) + 65;
    for(int i = 0; i < 26; i++)
    {
        if(r2Values[i] == convChar)
        {
            convInt = i;
            break;
        }
    }
    convInt  = ((convInt - r2Tick) + 26) % 26;
    
    convChar  = ((convInt + r1Tick) % 26) + 65;
    for(int i = 0; i < 26; i++)
    {
        if(r1Values[i] == convChar)
        {
            convInt = i;
            break;
        }
    }
    convInt  = ((convInt - r1Tick) + 26) % 26;
    
    convChar = convInt + 65;
    return convChar;
}