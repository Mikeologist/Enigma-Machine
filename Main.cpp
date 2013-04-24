#include <iostream>
#include <cctype>
#include <fstream>
#include <stdlib.h>
#include "Reflector.h"
#include "PatchPanel.h"
#include "Rotors.h"
using namespace std;

int main()
{
    Reflector ref;
    PatchPanel patch;
    Rotors rot;
    ifstream inFile;
    ofstream outFile;
    string line;
    char in;
    char rot1;
    char rot2;
    char rot3;
    char countChar;
    int test;
    bool beenPatched[26];
    
    /*cout << "Enter Text Here:\n    ";
    getline(cin, line);
    line.erase(remove(line.begin(), line.end(), ' ' ), line.end());
    test = line.length();
    cout << "Result Is:\n    ";*/

    inFile.open("/Users/Corey/Documents/CIS208/Enigma/Enigma/PatchPanel.txt");
    in = 'A';
    for(int i = 0; i < 26; i++)
    {
        getline(inFile,line);
        patch.setSubValues(in, toupper(line[5]));
        in++;
    }
    inFile.close();
    
    /*for(int i = 0; i < 26; i++)
    {
        beenPatched[i] = false;
    }
    countChar = 'A';
    cout << "Set Patch Panel:\n";
    
    for(int i = 0; i < 26; i++)
    {
        if(patch.getValueFor(countChar) == 'a')
        {
            while(true)
            {
                cout << "  Patch " << countChar << " -> ";
                cin >> in;
                in = toupper(in);
                if(beenPatched[in - 65])
                {
                    cout << "That letter has already been patched.\n";
                }
                else
                {
                    beenPatched[countChar - 65] = true;
                    beenPatched[in - 65] = true;
                    break;
                }
            }
            patch.setSubValues(countChar, in);
        }
        countChar++;
    }
    
    cout << "\nCurrent Patch:\n\n";
    cout << patch.toString();
    
    cout << "\n\nSet Rotors Position:\n";
    cout << "  Rotor Position 1 -> ";
    cin >> rot1;
    cout << "  Rotor Position 2 -> ";
    cin >> rot2;
    cout << "  Rotor Position 3 -> ";
    cin >> rot3;
    rot.setRotorPositions(rot1, rot2, rot3);
    
    cout << "\nCurrent Rotor Position:\n\n";
    cout << "1 2 3\n";
    cout << "| | |\n";
    cout << "V V V\n";
    cout << rot1 << " " << rot2 << " " << rot3 << "\n\n";
    
    cout << "Enter text to be converted\n";
    cin >> line;*/
    
    inFile.open("/Users/Corey/Documents/CIS208/Enigma/Enigma/RotorPositions.txt");
    getline(inFile,line);
    rot1 = toupper(line[20]);
    getline(inFile,line);
    rot2 = toupper(line[20]);
    getline(inFile,line);
    rot3 = toupper(line[20]);
    rot.setRotorPositions(rot1, rot2, rot3);
    inFile.close();

    inFile.open("/Users/Corey/Documents/CIS208/Enigma/Enigma/Message.txt");
    getline(inFile,line);
    line.erase(remove(line.begin(), line.end(), ' ' ), line.end());
    test = line.length();
    inFile.close();
    
    outFile.open("/Users/Corey/Documents/CIS208/Enigma/Enigma/Message.txt");
    line.erase(remove(line.begin(), line.end(), ' ' ), line.end());
    test = line.length();
    for(int i = 0; i < test; i++)
    {
        rot.tick();
        in = line[i];
        in = toupper(in);
        in = patch.getValueFor(in);
        in = rot.calcForwardValue(in);
        in = ref.getValueFor(in);
        in = rot.calcBackwardValue(in);
        in = patch.getValueFor(in);
        if(((i % 5) == 0) && (i != 0))
        {
            outFile << " ";
        }
        outFile << in;
    }
    outFile.close();
    system("osascript -e 'tell application \"TextEdit\" to quit'");
    system("open -e /Users/Corey/Documents/CIS208/Enigma/Enigma/Message.txt");
    return 0;
}

