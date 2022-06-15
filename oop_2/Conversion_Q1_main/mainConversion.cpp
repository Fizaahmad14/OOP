//#include "Conversion.h" 
#include "Conversion.cpp"
#include <iostream>
#include <string>
using namespace std;
void note();
long int integer(char *num);		
int main()
{
	Conversion numSystem;
	char *str = new char[0], *s1;
	int count = 0;
	cout<<"\n\tEnter Number = ";
	cin>>str;
	s1 = str;
	while(*s1 != '\0')
	{
		count++;
		s1++;
		if((numSystem.FindBase(str)==2&&count>16)||(numSystem.FindBase(str)==8)&&integer(str)>177777
		||(numSystem.FindBase(str)==10)&&integer(str)>65535)
		{
			note();
			cout<<"\n\tRe-Enter the Number = ";	
			cin>>str;
			s1=str;
			count = 0;
		}
		
	}  
		
	cout<<"\n\tBase of the number is = "<<numSystem.FindBase(str)<<endl;
	if(numSystem.FindBase(str)==2)
	{
		cout<<"\n\t--> In Octal   = "<<numSystem.toOctal(numSystem.toDecimal(str));
		cout<<"\n\t--> In Decimal = "<<numSystem.toDecimal(str);
		cout<<"\n\t--> In Hexa    = "<<numSystem.toHexaDecimal(numSystem.toDecimal(str))<<endl<<endl;
	}
	else if(numSystem.FindBase(str)==8)
	{
		cout<<"\n\t--> In Binary  = "<<numSystem.toBinary(numSystem.toDecimal(str));
		cout<<"\n\t--> In Decimal = "<<numSystem.toDecimal(str);
		cout<<"\n\t--> In Hexa    = "<<numSystem.toHexaDecimal(numSystem.toDecimal(str))<<endl<<endl;
	}
	else if(numSystem.FindBase(str)==16)
	{
		cout<<"\n\t--> In Binary  = "<<numSystem.toBinary(numSystem.toDecimal(str));
		cout<<"\n\t--> In Decimal = "<<numSystem.toDecimal(str);	
		cout<<"\n\t--> In Octal   = "<<numSystem.toOctal(numSystem.toDecimal(str))<<endl<<endl;
	}
	else if(numSystem.FindBase(str)==10)
	{
		cout<<"\n\t--> In Binary  = "<<numSystem.toBinary(str);
		cout<<"\n\t--> In Octal   = "<<numSystem.toOctal(str);
		cout<<"\n\t--> In Hexa    = "<<numSystem.toHexaDecimal(str)<<endl<<endl;
	}
return 0;
} 
void note()
{
	cout<<"\n\t*----------------------------------------------*";
	cout<<"\n\tNOTE : You need to Enter number within the range";
	cout<<"\n\t*--------------------RANGES--------------------*\n"; 
	cout<<"\n\t             ~ BINARY  = 16-bits";
	cout<<"\n\t             ~ OCTAL   =  177777";
	cout<<"\n\t             ~ DECIMAL =   65535";
	cout<<"\n\t             ~ HEXA    =    FFFF";
	cout<<"\n\n\t*---------------------------------------------*\n";
}
long int integer(char *num)
{
	char *s1 = (char*)num;
	long int n , temp, s2;
	n = 0;
	temp = 0;
	while( *s1 != '\0')
	{
		s2 = (int)*s1;
		s2-=48;
		temp = n*10+s2;
		n = temp;
		s1++;
	}
	return n;
}
