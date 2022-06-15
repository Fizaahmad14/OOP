/*Fiza Ahmad
  i200506-C
  Assignment 2
  */
#include <iostream>
#include <string>
using namespace std;
class Conversion
{
private:
	char* converSion;
public:
	Conversion()              ;
	~Conversion()              ;
	Conversion(char*)	   ;
	int        FindBase(char*);	
	char*       toOctal(char*);
	char*      toBinary(char*);	
	char*     toDecimal(char*);
	char* toHexaDecimal(char*);
}; 



