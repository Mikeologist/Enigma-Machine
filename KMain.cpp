// Enigam Machine working with 2 Rotors
// Kaykavous Farvardin

#include <iostream> // allows program to output data to th escreen
#include <string> // program uses C++ standard string class

using namespace std; // program uses names from the std namespace


// fuction main begins program execution 
int main()
{
  while(!0) 
  {	
  	// 26 capital letters characters set for rotor 1 
  	char rotor1[26] = {'M','Q','C','I','A','W','U','Y',
  		               'L','G','E','B','R','T','D','H','O', 
  					   'X','V','J','F','Z','S','N','K','P'};

  	// 26 capital letters characters set for rotor 2 	
  	char rotor2[26] = {'B','N','Z','L','H','F','T','X',
  		               'Y','J','K','U','D','R','A','V','I',
  					   'M','P','O','C','Q','G','S','W','E'};

  	int Capital = 0;
  	char Message_Letter = ' ';
  	int choice = 0;
  	string Message;
  	cout << " choose rotor 1 or rotor 2: ";	
  	cin >> choice;

  	if(choice == 1)
  	{
  		cout << " Type a message to Encrypt now: ";
  		cin >> Message;

  		string NotENCRYPTEDYet;
  		string ENCRYPTED;
  		NotENCRYPTEDYet = Message;

  		char chanel1 = ' '; // character chanel 1
  		chanel1 = rotor1[0];
  		for(int i = 0, i2 = 1; i < 25; i++, i2++)
  		{
  			cout << rotor1[i];
  		}
  		cout << endl;


  		char chanel2 = ' '; // character chanel 2
  		chanel2 = rotor2[0];
  		for(int i = 0, i2 = 1; i < 25; i++, i2++)
  		{
  			cout << rotor2[i];
  		}
  		cout << endl;

  		for(int pos = 0; pos < NotENCRYPTEDYet.length(); ++pos)
  		{
  			Message_Letter = NotENCRYPTEDYet.at(pos);
  			Capital = 0;
  			Capital = static_cast<int>(Message_Letter);
  			if(Capital >= 65 && Capital <= 90)
  			{
  				cout << " ENCRYPTED LETTER IS: " << Message_Letter << endl;
  				char LTNUM = ' ';
  				switch(Message_Letter) // switches cases rotor 1 
  				{
  					case 'A':LTNUM = rotor1[0];break;
                        case 'B':LTNUM = rotor1[1];break;
                      case 'C':LTNUM = rotor1[2];break;
                      case 'D':LTNUM = rotor1[3];break;
                      case 'E':LTNUM = rotor1[4];break;
                      case 'F':LTNUM = rotor1[5];break;
                      case 'G':LTNUM = rotor1[6];break;
                      case 'H':LTNUM = rotor1[7];break;
                      case 'I':LTNUM = rotor1[8];break;
                      case 'J':LTNUM = rotor1[9];break;
                      case 'K':LTNUM = rotor1[10];break;
                      case 'L':LTNUM = rotor1[11];break;
                      case 'M':LTNUM = rotor1[12];break;
                      case 'N':LTNUM = rotor1[13];break;
                      case 'O':LTNUM = rotor1[14];break;
                      case 'P':LTNUM = rotor1[15];break;
                      case 'Q':LTNUM = rotor1[16];break;
                      case 'R':LTNUM = rotor1[17];break;
                      case 'S':LTNUM = rotor1[18];break;
                      case 'T':LTNUM = rotor1[19];break;
  		            case 'U':LTNUM = rotor1[20];break;
                        case 'V':LTNUM = rotor1[21];break;
                      case 'W':LTNUM = rotor1[22];break;
                      case 'X':LTNUM = rotor1[23];break;
                      case 'Y':LTNUM = rotor1[24];break;
                      case 'Z':LTNUM = rotor1[25];break;
  				}
  				cout << " Rotor 1 Letter Encrypted is: " << LTNUM << endl; // rotor 1 encrypted output message
  				char chanel1 = ' ';
  				chanel1 = rotor1[0];
  				for(int i = 0, i2 = 1; i < 25; i++, i2++)
  				{
  					cout << rotor1[i];
  					rotor1[i] = rotor1[i2];
  				}
  				rotor1[25] = chanel1;
  				cout << endl;

  				Message_Letter = LTNUM;
  				switch(Message_Letter) // switches cases rotor 2
  				{
  					case 'A':LTNUM = rotor2[0];break;
                      case 'B':LTNUM = rotor2[1];break;
                      case 'C':LTNUM = rotor2[2];break;
                      case 'D':LTNUM = rotor2[3];break;
                      case 'E':LTNUM = rotor2[4];break;
                      case 'F':LTNUM = rotor2[5];break;
                      case 'G':LTNUM = rotor2[6];break;
                      case 'H':LTNUM = rotor2[7];break;
                      case 'I':LTNUM = rotor2[8];break;
                      case 'J':LTNUM = rotor2[9];break;
                      case 'K':LTNUM = rotor2[10];break;
                      case 'L':LTNUM = rotor2[11];break;
                      case 'M':LTNUM = rotor2[12];break;
                      case 'N':LTNUM = rotor2[13];break;
                      case 'O':LTNUM = rotor2[14];break;
                      case 'P':LTNUM = rotor2[15];break;
                      case 'Q':LTNUM = rotor2[16];break;
                      case 'R':LTNUM = rotor2[17];break;
                      case 'S':LTNUM = rotor2[18];break;
                      case 'T':LTNUM = rotor2[19];break;
                      case 'U':LTNUM = rotor2[20];break;
                      case 'V':LTNUM = rotor2[21];break;
                      case 'W':LTNUM = rotor2[22];break;
                      case 'X':LTNUM = rotor2[23];break;
                      case 'Y':LTNUM = rotor2[24];break;
                      case 'Z':LTNUM = rotor2[25];break;
  				}
  				cout << " Rotor 2 Letter Encrypted is: " << LTNUM << endl; // rotor 2 encrypted output message
  				char chanel2 = ' ';
  				for(int i = 25, i2 = 24; i > 0; i--, i2--)
  				{
  					cout << rotor2[i];
  					rotor2[i] = rotor2[i2];
  				}
  				rotor2[0] = chanel2;
  				cout << endl;

  				Message_Letter = LTNUM;
  				ENCRYPTED = ENCRYPTED + Message_Letter;
  			}
  			else
  			{
  				ENCRYPTED = ENCRYPTED + Message_Letter;
  				char chnel1 =' ';
  				chanel1 = rotor1[0];
  				for(int i = 0, i2 = 1; i < 25; i++, i2++)
  				{
  					cout << rotor1[i];
  					rotor1[i] = rotor1[i2];
  				}
  				rotor1[25] =chanel1;

  				char ch2 = ' ';
                  for(int i = 25, i2 = 24; i > 0; i--,i2--)
  				{
  					cout << rotor2[i];
  					rotor2[i] = rotor2[i2];
  				}
  				rotor2[0] = chanel2;
  		}
   }
   cout << " ENCRYPTED Message: " << ENCRYPTED << endl;
   cout << endl;
   }
   else 
  	 if(choice == 2)
  	 {
  		 cout << "Please Enter a message to Decrypt: " ;
           cin >> Message;

  		 char chanel1 = ' ';
  		 chanel1 = rotor1[0];
  		 for(int i = 0, i2 = 1; i < 25; i++, i2++)
  		 {
  			 cout << rotor1[i];
  		 }
  		 cout << endl;

  		 char chanel2 = ' ';
  		 chanel2 = rotor2[0];
  		 for(int i = 0,i2 = 1; i < 25; i++,i2++)
  		 {
  			 cout << rotor2[i];
  		 }
  		 cout << endl;

  		 string NotDECRYPTEDYet;
  		 string DECRYPTED;
  		 NotDECRYPTEDYet = Message;

  		 for(int pos = 0; pos < NotDECRYPTEDYet.length(); ++pos)
  		 {
  			 Message_Letter = NotDECRYPTEDYet.at(pos);
  			 Capital = 0;
  			 Capital = static_cast<int>(Message_Letter);
  			 if(Capital >= 65 && Capital <= 90)
  			 {
  				 cout << " DECRYPTED LETTER IS: " << Message_Letter << endl;
  				 char LTNUM = ' ';
  				 switch(Message_Letter) // switches case rotor 1
  				 {
  					case 'A':LTNUM = rotor1[0];break;
                        case 'B':LTNUM = rotor1[1];break;
                      case 'C':LTNUM = rotor1[2];break;
                      case 'D':LTNUM = rotor1[3];break;
                      case 'E':LTNUM = rotor1[4];break;
                      case 'F':LTNUM = rotor1[5];break;
                      case 'G':LTNUM = rotor1[6];break;
                      case 'H':LTNUM = rotor1[7];break;
                      case 'I':LTNUM = rotor1[8];break;
                      case 'J':LTNUM = rotor1[9];break;
                      case 'K':LTNUM = rotor1[10];break;
                      case 'L':LTNUM = rotor1[11];break;
                      case 'M':LTNUM = rotor1[12];break;
                      case 'N':LTNUM = rotor1[13];break;
                      case 'O':LTNUM = rotor1[14];break;
                      case 'P':LTNUM = rotor1[15];break;
                      case 'Q':LTNUM = rotor1[16];break;
                      case 'R':LTNUM = rotor1[17];break;
                      case 'S':LTNUM = rotor1[18];break;
                      case 'T':LTNUM = rotor1[19];break;
  		            case 'U':LTNUM = rotor1[20];break;
                        case 'V':LTNUM = rotor1[21];break;
                      case 'W':LTNUM = rotor1[22];break;
                      case 'X':LTNUM = rotor1[23];break;
                      case 'Y':LTNUM = rotor1[24];break;
                      case 'Z':LTNUM = rotor1[25];break;
  				 }
  				 cout << " Rotor 1 Letter Encrypted is: " << LTNUM << endl; // rotor 1 encrypted output message
  				 char chanel1 = ' ';
  				 chanel1 = rotor1[25];
  				 for(int i = 25, i2 = 24; i > 0; i--, i2--)
  				 {
  					 cout << rotor1[i];
  					 rotor1[i] = rotor1[i2];
  				 }
  				 rotor1[0] -chanel1;
  				 cout << endl;

  				 Message_Letter = LTNUM;
  				 switch(Message_Letter) // switches case rotor 2
  				 {
  					case 'A':LTNUM = rotor2[0];break;
                      case 'B':LTNUM = rotor2[1];break;
                      case 'C':LTNUM = rotor2[2];break;
                      case 'D':LTNUM = rotor2[3];break;
                      case 'E':LTNUM = rotor2[4];break;
                      case 'F':LTNUM = rotor2[5];break;
                      case 'G':LTNUM = rotor2[6];break;
                      case 'H':LTNUM = rotor2[7];break;
                      case 'I':LTNUM = rotor2[8];break;
                      case 'J':LTNUM = rotor2[9];break;
                      case 'K':LTNUM = rotor2[10];break;
                      case 'L':LTNUM = rotor2[11];break;
                      case 'M':LTNUM = rotor2[12];break;
                      case 'N':LTNUM = rotor2[13];break;
                      case 'O':LTNUM = rotor2[14];break;
                      case 'P':LTNUM = rotor2[15];break;
                      case 'Q':LTNUM = rotor2[16];break;
                      case 'R':LTNUM = rotor2[17];break;
                      case 'S':LTNUM = rotor2[18];break;
                      case 'T':LTNUM = rotor2[19];break;
                      case 'U':LTNUM = rotor2[20];break;
                      case 'V':LTNUM = rotor2[21];break;
                      case 'W':LTNUM = rotor2[22];break;
                      case 'X':LTNUM = rotor2[23];break;
                      case 'Y':LTNUM = rotor2[24];break;
                      case 'Z':LTNUM = rotor2[25];break;
  				 }
  				 cout << " Rotor 2 Letter Encrypted is: " << LTNUM << endl; // rotor 2 encrypted output message

  				 char chanel2 = ' ';
  				 chanel2 = rotor2[0];
  				 for (int i = 0, i2 = 1; i < 25; i++, i2++)
  				 {
  					 cout << rotor2[i];
  					 rotor2[i] = rotor2[i2];
  				 }
  				 rotor2[25] = chanel2;
                   cout << endl;
                  
  				 Message_Letter = LTNUM;
                   DECRYPTED = DECRYPTED + Message_Letter;
  			 }
  			 else
  			 {
  				 DECRYPTED = DECRYPTED + Message_Letter;

  				 char ch1 = ' ';
                  ch1 = rotor1[25];
                  for(int i = 25,i2 = 24; i > 0; i--,i2--)
                      {  
                          cout << rotor1[i];
                       rotor1[i] = rotor1[i2];
                       }
                  rotor1[0] = ch1;
   
                  char ch2 = ' ';
                  ch2 = rotor2[0];
                  for(int i = 0,i2 = 1; i < 25; i++,i2++)
                      {  
                          cout << rotor2[i];
                          rotor2[i] = rotor2[i2];
                      }
                  rotor2[25] = ch2;
              }
      }
      cout << "DECRYPTED Message: " << DECRYPTED << endl; // output message
   
      }

   }

  	system("pause"); // system output pauses for to see the output

  	return(0); // indicate that program ended successfully
}
