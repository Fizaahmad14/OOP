/*Fiza Ahmad
  i200506-C
  Assignment 2 */
#include "Conversion.h"  
#include <iostream>
#include <cmath>
#include <string>
/////////////////////////////////*-------GLOBAL FUNCTIONS--------*////////////////////////////////


/*-----------Global function to convert char into integer-----------*/

long int toInteger(char *s1)
{
	//declaring and initializing variables
	
	long int b , temp, s2;
	b = 0;
	temp = 0;
	
	//this will covert string "XXXX" into integer XXXX
	
	while( *s1 != '\0')
	{
		//reading char as integer
		
		s2 = (int)*s1;
		
		//subtractibg 48 from char ascii to making it integer
		
		s2-=48;
		
		//multiplying previous int with 10 and adding new int to temp to make it multi digit integer 
		
		temp = b*10+s2;
		
		//assigning temp to b
		
		b = temp;
		
		//incrementing s1 to move on to next char
		
		s1++;
	}
	
	//finally returning integer back
	
	return b;
}

/*-----------Global function to convert integer into binary , octal , decimal-----------*/

long int convertIt(int base, char *s1,int power)
{
	//declaring and initializing variables
	
	long int sum_b = 0, rem_b = 0, count_b = 0, quotient_b = toInteger(s1);
	
	//while loop will continue untill quotient is not equal to zero
	
	while(quotient_b != 0)					
	{
	
		//this will take mode of integer with given base and remainder will save in rem_b
	
		rem_b = quotient_b % base ;
		
		//this will divide integer with given base and quotient will update with new one
				
		quotient_b /= base ;	
		
		//this will multiply the rem with the powers of given base and the previous value will add in it
				
		sum_b     += (rem_b * pow(power,count_b)) ;	
		
		//this will increment the count to raise the powers 
		
		count_b++;
	}
	
	//finally returning conversion(binary/octal/decimal) back
	
	return sum_b;
}

/*-----------Global function to convert integer into char pointer-----------*/	
char* toChar(long int sum_b)
{

	//this function basically counts the size of the converted number and convert it again to char pointer

	long int count_sum = 0,rem_b,quotient_b,sum_size = sum_b; 
	
	//check if size of integer is zero then return zero
	
	if(sum_size==0)
	
	//returning zero
	
	return "0";
	
	//check if size is not equal to zero then convert the number into char pointer
	
	while(sum_size != 0)
		{
			sum_size/=10;
			
			//incrementing the count while size is not zero
			
			count_sum++;
		}
		
		//creating a new char pointer of integer size 
		
		char* binNum = new char[count_sum];
		
		//assigning sum_b to sum_size and quotient_b to perform fuerther operations
		
		sum_size = sum_b;
		quotient_b = sum_b;
		
		//assining zero to reminder 
		
		rem_b = 0;
		
		//this loop will convert integer into char pointer 
		
		while(count_sum>=0)
		{
		
			//by taking mod it will store last number 
		
			rem_b = quotient_b % 10;
			
			//dividing will exclude the last number   
			
			quotient_b/=10;
			
			//it will assign the last int to last index of the char pointer
			
			binNum[count_sum-1] = (char)rem_b+48;
			
			//decrementing count while it is greater then equal to zero
			
			count_sum--;
		}
		
		//finally returning the char pointer back
		
		return binNum;
}
		
using namespace std;

	//initializing default constructor and assigning zero to members
	
	Conversion::Conversion()
	{
		converSion =  (char*) new char[0];
	}
	
	
	Conversion::~Conversion() {}
	
	//initializing parameterized constructor and assigning c to member
	
	Conversion::Conversion(char* c)
	{
		converSion =  (char*)c;
	}
	
	//function to find base of a number 
	
	
	int Conversion::FindBase(char* s1)
	{
		//initiallizing all counts with zero to find base
		long int count        = 0 ;
		long int countBinary  = 0 ;
		long int countOctal   = 0 ;
		long int countDecimal = 0 ;
		long int countHexa    = 0 ;
		
		//creating copy to find base
		
		char *s1_cpy         ;
		s1_cpy = (char*)s1   ; 
		
		//this while loop will continue unless char != '\0'
		
		while(*s1_cpy != '\0')
		{
			//this will count the szie of actual number
			
			count++;
			
			//checking if user enter 1's and 0's then inc binary count 
			
			if(*s1_cpy=='0' || *s1_cpy=='1')
				countBinary++;
				
			//checking if user enter any alphabet bewtween A's and F's then inc hexa count
				
			if((*s1_cpy<='9' && *s1_cpy>='0') || (*s1_cpy>='A' && *s1_cpy<='F'))
				countHexa++;
	
			//checking if user enter char smaller then 8 then inc octal count
			
			if(*s1_cpy<='7' && *s1_cpy>='0')
				countOctal++;
				
			//checking if user enter aleasr one char greater then 7 then inc decimal count
				
			if((*s1_cpy<='9' && *s1_cpy>='0'))
				countDecimal++;	
			s1_cpy++;
		}
		//if binary count is equal to actual count of string then return base 2
		
		if(count==countBinary)
			return 2;
			
		//if octal count is equal to actual count of string then return base 8
			
		else if(count==countOctal)
			return 8;
			
		//if decimal count is equal to actual count of string then return base 10	
		
		else if(count==countDecimal)
			return 10;
			
		//if hex count is equal to actual count of string then return base 16
			
		else if(count==countHexa)
			return 16;
			
		//else will return 0	
		
		return 0;
    	
	}	
	
	//function to convert char pointer into binary
	
	char* Conversion::toBinary(char* bi)
	{
		//assigning bi to s1
		
		char *s1 = (char*)bi;
		
		//first call will convert s1 into integer binary, second call will convert that binary into char pointer 
		
		return toChar(convertIt(2,s1,10));
	}
	
	//function to convert char pointer into octal
	
	char* Conversion::toOctal(char* oc)
	{
		//assigning oc to s1
	
		char *s1 = (char*)oc;
		
		//first call will convert s1 into integer octal, second call will convert that octal into char pointer 
		
		return toChar(convertIt(8,s1,10));
	}
	
	//function to convert char pointer into decimal
		
	char* Conversion::toDecimal(char* de)
	{
		char *s1 = (char*)de;
		long int size = 0;
		
		//finding the size of s1
		
		while( *(s1+size) != '\0')
		{
			size++;
		}
		
		//declaring and initializing vaiables for further process
		
		long int s2 = 0 ,i, sum=0;
		i = size-1;
		long int j = 0; 
		
		//checking if base = 16 
		
		if(FindBase(de)==16)
		{
			while( i >= 0  )
			{
				if      (*(s1+i)=='A') s2 = 10; //if char is A then assign 10 to s2
				else if (*(s1+i)=='B') s2 = 11; //if char is B then assign 11 to s2
				else if (*(s1+i)=='C') s2 = 12; //if char is C then assign 12 to s2
				else if (*(s1+i)=='D') s2 = 13; //if char is D then assign 13 to s2
				else if (*(s1+i)=='E') s2 = 14; //if char is E then assign 14 to s2
				else if (*(s1+i)=='F') s2 = 15; //if char is F then assign 15 to s2
				else
				{
				
					//if char is an int then conerting it to integer 
				
					s2  = (int)*(s1+i) ;
					s2 -= 48 ;
				}
				
				//adding multiplication of number with powers of 16
				
				sum += s2 * pow(16,j);	
				
				//decrementing i to check if i is greater than zero ot not
				
				i-- ;
				
				//incrementing j to raises the powers
				
				j++;
			}
		return toChar(sum);	
	}
	
	//if base is not equal to 16 then calling functions
	
		long int dec ;
		
		//this will save respective base  
		
		dec = FindBase(de) ;
		
		//first call will convert s1 into integer decimal, second call will convert that decimal into char pointer 
		
		return toChar(convertIt(10,s1,dec));
	}
	
	//function to convert char pointer into toHexaDecimal
	
	char* Conversion::toHexaDecimal(char* he)
	{
		char *s1 = (char*)he;
		
		//declaring and initializing vaiables for further process
		
		long int r = 0, quotient = 1, quotient_h = toInteger(s1);
		string  hex = " ";
		
		//this loop will continue until quotient is greater then zero
			
		while(quotient>0)
		{
			r = quotient_h%16;				//it will give reminder
			if      (r==0) hex =  '0' + hex; 		//it will add '0' to hex if r is 0
			else if (r==1) hex =  '1' + hex; 		//it will add '1' to hex if r is 1
			else if (r==2) hex =  '2' + hex; 		//it will add '2' to hex if r is 2
			else if (r==3) hex =  '3' + hex;		//it will add '3' to hex if r is 3 
			else if (r==4) hex =  '4' + hex;		//it will add '4' to hex if r is 4 
			else if (r==5) hex =  '5' + hex;		//it will add '5' to hex if r is 5
			else if (r==6) hex =  '6' + hex;		//it will add '6' to hex if r is 6 
			else if (r==7) hex =  '7' + hex;		//it will add '7' to hex if r is 7 
			else if (r==8) hex =  '8' + hex;		//it will add '8' to hex if r is 8 
			else if (r==9) hex =  '9' + hex;		//it will add '9' to hex if r is 9 
			else if(r==10) hex =  'A' + hex;		//it will add 'A' to hex if r is 10 
			else if(r==11) hex =  'B' + hex;		//it will add 'B' to hex if r is 11
			else if(r==12) hex =  'C' + hex;		//it will add 'C' to hex if r is 12 
			else if(r==13) hex =  'D' + hex;		//it will add 'D' to hex if r is 13
			else if(r==14) hex =  'E' + hex;		//it will add 'E' to hex if r is 14
			else if(r==15) hex =  'F' + hex;		//it will add 'F' to hex if r is 15
			quotient_h/=16;				//it will give quotient
			quotient=quotient_h;
		}
		string str=hex;
		
		//further converting
		
		long int count;
		count=0;
		
		//finding the size
		
		while(str[count] != '\0')
		{
			count++;
		}
		count--;
		char* hexNum = new char[count];
		
		//converting integer into string
		
		while(count>=0)
		{
			hexNum[count-1] = str[count-1] ;
			count--;	
		}
		return hexNum;
	}
    
