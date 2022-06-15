/*Fiza Ahmad (20I-0506)
  Assignment no 1
  Section C*/
#include<iostream>
using namespace std;
/*---------------------Question No 1A-----------------------*/
/*Returns the length of the string in number of characters. */

int Strlen(const char* s1)
{
	int count=0;
	while(*s1 != '\0')
	{
		count++;
		s1++;
	}
	return count;
}

/*------------------------Question No 1B-----------------------*/
/*Copies string s2 into array s1. The value of s1 is returned. */

char* Strcpy(char* s1, const char* s2)
{
	s1 = new char[Strlen(s2)];
	for (int i=0; i<Strlen(s2); i++)
        {
        	*(s1+i) = *(s2+i);
        }
        return s1;
}

/*------------Question No 1C-----------------*/
/*Compares the string s1 with the string s2.
The function returns 0 , less than 0 or greater
than 0 if s1 is equal to , less than or greater
than s2 , respectively. */

int StrCmp(const char* s1, const char *s2)
{

	int sum1=0,sum2=0;
	for(int i=0;i<Strlen(s1) ;i++)
	{
		sum1 += (int)*(s1+i);
		sum2 += (int)*(s2+i);
	}
	if(sum1==sum2)
	return 0;
	else if(sum1>sum2)
	return 1;
	else if(sum1<sum2)
	return -1;
	else 
	return 0;	
}

/*---------------Question No 1D-----------------*/
/*A call to StrTok breaks string s1 into
&quot;tokens&quot; ( logical pieces such as words
in a line of text) separated by character
contained in const char s2. size parameter
will be updated number of tokens and save
actual tokens in char**&amp; listOfTokens.*/

void StrTok(char* s1, char s2, char**& listOfTokens , int& size)
{
	size=1;
	int k=0;
	for(int i=0; i<=Strlen(s1); i++)
	{
		if((*(s1+i)>=32  && *(s1+i)<=64) || 
		   (*(s1+i)>=91  && *(s1+i)<=96) || 
		   (*(s1+i)>=123 && *(s1+i)<=126))
		{
			size++;
			k=0;	
		}
		else
			k++;	
	}
	listOfTokens = new char*[size];
		for(int i=0; i<size; i++)
			listOfTokens[i]=new char[k];
	size=1;
	k=0;
	for(int i=0; i<=Strlen(s1); i++)
	{
		if((*(s1+i)>=32  && *(s1+i)<=64) || 
		   (*(s1+i)>=91  && *(s1+i)<=96) || 
		   (*(s1+i)>=123 && *(s1+i)<=126))
		{
			s2 = *(s1+i);
			size++;
			k=0;
		}
		else
		{
			*((listOfTokens+(size-1))+k) = (s1+i);
			k++;
		}
	}			
		
}

/*------------------------Question No 1E-----------------------------*/
/*Searches the string s1 for the all the occurrences
of the string s2. Save starting indexes in array (listOfOccurrences).
And save updated size of array listOfOccurrences also return true. But
if s2 not found returns false. */

bool StrFind(char* s1, char *s2,int*& listOfOccurrences, int& size)
{
	int count1=0, count2=0,sum2 = 0, sumFind=0;
	size=0;
	char *s2_cpy = s2;
	while(*s2_cpy != '\0')
	{
		s2_cpy++;
		sum2 += (int)*(s2+count2);
		count2++;
	}
	for(int i=0; i<Strlen(s1) ; i++)
	{
		for(int j=0; j<Strlen(s2); j++)
		{
			sumFind += *(s1+(i+j)) ;
		}
		if(sum2==sumFind)
		{
			if(*(s1+i)==*(s2+0))
			{
				*(listOfOccurrences+size) = i;
				 size++;
			} 
		}
		sumFind=0;
	}
	if(size==0)
	return false;
	else
	return true;
}

/*swap the string of swapIndex0 and swapIndex1 within 2d char array s1 
return true if indexes are correct and swapping is successful and 
return false if swapping is not successful (indexes are incorrect) */

//-------------------Question No 1F-----------------

bool StrSwapIn2DArray (char** s1, int numberOfRows, int swapIndex0, int swapIndex1)
{
	
	if(swapIndex0<0 && swapIndex0>=numberOfRows || swapIndex1<0 && swapIndex1>=numberOfRows)
	return false;
	char* newIndex= new char[Strlen(s1[swapIndex0])];
	newIndex          = Strcpy(newIndex,s1[swapIndex0]);
	s1[swapIndex0] = Strcpy(s1[swapIndex0],s1[swapIndex1]);
	s1[swapIndex1] = Strcpy(s1[swapIndex1],newIndex);
	return true;
}

/*------------------RECCURSION----------------------*/
//----------------Question No 2A-------------------*/

int find(int array[], int length, int target)
{
	if(length<0)
	return -1;
	else if(array[length-1]==target)
	return (length-1);
	length--;
	return find(array,length,target);
}

/*----------------Question No 2B-----------------*/

void replace(char* s1, char ch1, char ch2)
{
	
	if(*(s1+0)=='\0')
	return;
	else if(*(s1+0)==ch1)
	*(s1+0)=ch2;
	s1++;
	return replace(s1,ch1,ch2);
			
}
/*--------------PATTERN 1-----------------*/
void PrintAts(int n,char ch1)
{
	if(n<1)
	return;
	cout<<ch1;
	PrintAts(n-1,ch1);
}
void PrintPlus(int k,char ch2)
{
	if(k<1)
	return;
	cout<<ch2;
	PrintPlus(k-1,ch2);
}
void PrintCounting(int n,int k,char ch2)
{
	if(n<1)
	return;
	cout<<n;
	PrintPlus(n,ch2);
	PrintCounting(n-1,k,ch2);
	
}
void PrintPattern1(int n, int k, char ch1, char ch2)
{
	if(k<1)
	return;
	cout<<n;
	PrintAts(n,ch1);
	if(n!=k)
		PrintPattern1(n+1,k,ch1,ch2);
	else
		PrintCounting(n-1,k,ch2);		
}
/*--------------PATTERN 2-----------------*/
void PrintSpace(int n1)
{
	if(n1<=0)
	return;
	PrintSpace(n1-1);
	cout<<" ";
}
void PrintPattern(char ch, int n1)
{
	if(n1<=0)
	return;
	PrintPattern(ch,n1-1);
	cout<<ch;
}
void PrintPattern2(char ch, int n1, int n2)
{
	if(n1<=0)
	return;
	PrintSpace(n1-1);
	PrintPattern(ch,n2-n1+1);
	cout<<endl;
	PrintPattern2(ch,n1-1,n2);
}
/*--------------PATTERN 3-----------------*/
void PrintSpaces(int spaces)
{
	//Base Case, terminating
    	if(spaces == 0)
    	{
    	    return;
    	}
    	cout<<" ";
	PrintSpaces(spaces - 1);
}
//Function to print the pattern using spaces and Staerics
void PrintPattern3(int start, int end)
{
	int init_space;
	int lat_spaces;
	//Base Case , Terminating
	if(start == (end*2))
    	{
        	return;
    	}
    	//Evaluating starting spaces
   	if(start < end*2 - start - 1)
    	{
        	init_space = start - 1;
    	}
    	else
    	{ 
    		init_space = end*2 - start - 1;
    	}
    
    	//EValuating Center spaces
    	lat_spaces = end*2 - init_space*2 - 3;
    
    	//Print Number of Initial Spaces
    	PrintSpaces(init_space);
    	
    	//Starting Staeric
   	cout<<"*";

	//Printing Center spaces followed by the Next Staeric
    	if(lat_spaces >= 0)
    	{
        	PrintSpaces(lat_spaces);
    		cout<<"*";
    	}
    	cout<<endl;
	//Recursion call
    	PrintPattern3(start + 1, end);
}
