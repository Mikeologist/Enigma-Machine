#include <iostream>
#include "PatchPanel.h"
using namespace std;

char patchPanel[26];

PatchPanel::PatchPanel()
{
    for(int i = 0; i < 26; i++)
    {
        patchPanel[i] = 'a';
    }
}

char* PatchPanel::getSubValues()
{
    return patchPanel;
}

char PatchPanel::getValueFor(char valInput)
{
    return patchPanel[(valInput - 65)];
}

void PatchPanel::setSubValues(char patch1, char patch2)
{
    patchPanel[(patch1 - 65)] = patch2;
    patchPanel[(patch2 - 65)] = patch1;
}

string PatchPanel::toString()
{
    string temp = "";
    char pat = 'A';
    
    for(int i = 0; i < 26; i++)
    {
        temp += pat;
        temp += " ";
        pat++;
    }

    temp += "\n| | | | | | | | | | | | | | | | | | | | | | | | | |";
    temp += "\nV V V V V V V V V V V V V V V V V V V V V V V V V V";
    temp += '\n';
    
    for(int i = 0; i < 26; i++)
    {
        temp += patchPanel[i];
        temp += " ";
    }
    
    return temp;
}