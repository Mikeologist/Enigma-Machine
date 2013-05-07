#include <iostream>
#include "Reflector.h>

using namespace std;

#define NUMLETTER 26

char reflector[NUMLETTER]{'Q','Y','H','O','G','N','E','C','V','P','U','Z','T','F','D','J','A','X','W','M','K','I','S','R','B','L'}

char Reflector::getValuefor(char input)
{
  input = toupper(input);
	switch(input)
	{
		case 'A':
			return reflector[0];
		case 'B':
			return reflector[1];
		case 'C':
			return reflector[2];
		case 'D':
			return reflector[3];
		case 'E':
			return reflector[4];
		case 'F':
			return reflector[5];
		case 'G':
			return reflector[6];
		case 'H':
			return reflector[7];
		case 'I':
			return reflector[8];
		case 'J':
			return reflector[9];
		case 'K':
			return reflector[10];
		case 'L':
			return reflector[11];
		case 'M':
			return reflector[12];
		case 'N':
			return reflector[13];
		case 'O':
			return reflector[14];
		case 'P':
			return reflector[15];
		case 'Q':
			return reflector[16];
		case 'R':
			return reflector[17];
		case 'S':
			return reflector[18];
		case 'T':
			return reflector[19];
		case 'U':
			return reflector[20];
		case 'V':
			return reflector[21];
		case 'W':
			return reflector[22];
		case 'X':
			return reflector[23];
		case 'Y':
			return reflector[24];
		case 'Z':
			return reflector[25];
	}
}
