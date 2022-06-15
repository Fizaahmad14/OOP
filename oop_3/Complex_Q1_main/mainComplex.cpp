/*Fiza Ahmad
  i200506-C
  Assignment 3
  Question no 1
  */
#include "Complex.h"  
#include <iostream>
#include <string>
using namespace std;
int main()
{
	Complex a,b,add,sub,mul,div,add_assign,sub_assign ,mul_assign ,div_assign;
	cout<<"\n*--Enter 1st Complex number--*";
	cin>>a;
	cout<<"\n\t1st Complex number = "<<a;
	cout<<"\n*--Enter 2nd Complex number--*";
	cin>>b;
	cout<<"\n\t2nd Complex number = "<<b;
	add_assign = a;
	sub_assign = a;
	mul_assign = a;
	div_assign = a;
	add        = a + b;
	sub        = a - b;
	mul        = a * b;
	div        = a / b;
	cout<<"\n*--ADDITION--*\n";
	cout<<"\n\t( a + b )\n";
	cout<<"\t--> Real part      = "<<add.getReal()<<endl; 
	cout<<"\t--> Imaginary part = "<<add.getImg()<<endl;
	cout<<"\t--> Complex number = "<<add<<endl;
	cout<<"\n\t( b + a )\n";
	add = b + a;
	cout<<"\t--> Real part      = "<<add.getReal()<<endl; 
	cout<<"\t--> Imaginary part = "<<add.getImg()<<endl;
	cout<<"\t--> Complex number = "<<add<<endl;
	
	cout<<"*--SUBTRACTION--*\n";
	cout<<"\n\t( a - b )\n";
	cout<<"\t--> Real part      = "<<sub.getReal()<<endl; 
	cout<<"\t--> Imaginary part = "<<sub.getImg()<<endl;
	cout<<"\t--> Complex number = "<<sub<<endl;
	cout<<"\n\t( b - a )\n";
	sub = b - a;
	cout<<"\t--> Real part      = "<<sub.getReal()<<endl; 
	cout<<"\t--> Imaginary part = "<<sub.getImg()<<endl;
	cout<<"\t--> Complex number = "<<sub<<endl;
	
	cout<<"*--MULTIPLICATION--*\n";
	cout<<"\n\t( a * b )\n";
	cout<<"\t--> Real part      = "<<mul.getReal()<<endl; 
	cout<<"\t--> Imaginary part = "<<mul.getImg()<<endl;
	cout<<"\t--> Complex number = "<<mul<<endl;
	cout<<"\n\t( b * a )\n";
	mul = b * a;
	cout<<"\t--> Real part      = "<<mul.getReal()<<endl; 
	cout<<"\t--> Imaginary part = "<<mul.getImg()<<endl;
	cout<<"\t--> Complex number = "<<mul<<endl;
	
	
	cout<<"*--DIVISION--*\n";
	cout<<"\n\t( a / b )\n";
	cout<<"\t--> Real part      = "<<div.getReal()<<endl; 
	cout<<"\t--> Imaginary part = "<<div.getImg()<<endl;
	cout<<"\t--> Complex number = "<<div<<endl;
	div = b / a;
	cout<<"\n\t( b / a )\n";
	cout<<"\t--> Real part      = "<<div.getReal()<<endl; 
	cout<<"\t--> Imaginary part = "<<div.getImg()<<endl;
	cout<<"\t--> Complex number = "<<div<<endl;
	
	cout<<"\n*--ADD_ASSIGN--*\n";
	add_assign += a;
	cout<<"\n\t( a += a )\n";
	cout<<"\t--> Complex number = "<<add_assign<<endl;
	add_assign  = a;
	add_assign += b;
	cout<<"\t( a += b )\n";
	cout<<"\t--> Complex number = "<<add_assign<<endl;
	add_assign  = b;
	add_assign += b;
	cout<<"\t( b += b )\n";
	cout<<"\t--> Complex number = "<<add_assign<<endl;
	add_assign  = b;
	add_assign += a;
	cout<<"\t( b += a )\n";
	cout<<"\t--> Complex number = "<<add_assign<<endl;
	
	
	cout<<"*--SUB_ASSIGN--*\n";
	cout<<"\n\t( a -= a )\n";
	cout<<"\t--> Complex number = "<<sub_assign<<endl;
	sub_assign  = a;
	sub_assign -= b;
	cout<<"\t( a -= b )\n";
	cout<<"\t--> Complex number = "<<sub_assign<<endl;
	sub_assign  = b;
	sub_assign -= b;
	cout<<"\t( b -= b )\n";
	cout<<"\t--> Complex number = "<<sub_assign<<endl;
	sub_assign  = b;
	sub_assign -= a;
	cout<<"\t( b -= a )\n";
	cout<<"\t--> Complex number = "<<sub_assign<<endl;
	
	
	cout<<"*--MUL_ASSIGN--*\n";
	cout<<"\n\t( a *= a )\n";
	mul_assign *= a;
	cout<<"\t--> Complex number = "<<mul_assign<<endl;
	mul_assign  = a;
	mul_assign *= b;
	cout<<"\t( a *= b )\n";
	cout<<"\t--> Complex number = "<<mul_assign<<endl;
	mul_assign  = b;
	mul_assign *= b;
	cout<<"\t( b *= b )\n";
	cout<<"\t--> Complex number = "<<mul_assign<<endl;
	mul_assign  = b;
	mul_assign *= a;
	cout<<"\t( b *= a )\n";
	cout<<"\t--> Complex number = "<<mul_assign<<endl;
	
	cout<<"*--DIV_ASSIGN--*\n";
	cout<<"\n\t( a /= a )\n";
	div_assign /= a;
	cout<<"\t--> Complex number = "<<div_assign<<endl;
	div_assign  = a;
	div_assign /= b;
	cout<<"\t( a /= b )\n";
	cout<<"\t--> Complex number = "<<div_assign<<endl;
	div_assign  = b;
	div_assign /= b;
	cout<<"\t( b /= b )\n";
	cout<<"\t--> Complex number = "<<div_assign<<endl;
	div_assign  = b;
	div_assign /= a;
	cout<<"\t( b /= a )\n";
	cout<<"\t--> Complex number = "<<div_assign<<endl;
	
	cout<<"*--LESS COMPARISON--*\n";
	if(a > b)
	cout<<"\n\t(a > b : TRUE)\n\t*1st complex number is greater then 2nd complex number*\n";
	else
	cout<<"\n\t(a > b : FALSE)\n\t*1st complex number is not greater then 2nd complex number*\n";
	
	cout<<"\n*--GREATER COMPARISON--*\n";
	if(a < b)
	cout<<"\n\t(a < b : TRUE)\n\t*1st complex number is smaller then 2nd complex number*\n";
	else
	cout<<"\n\t(a < b : FALSE)\n\t*1st complex number is not smaller then 2nd complex number*\n";
	
	cout<<"\n*--EQUAL COMPARISON--*\n";
	if(a == b)
	cout<<"\n\t(a == b : TRUE)\n\t*1st complex number is equal to 2nd complex number*\n";
	else
	cout<<"\n\t(a == b : FALSE)\n\t*1st complex number is not equal to 2nd complex number*\n";
	
	cout<<"\n*--EQUAL NOT COMPARISON--*\n";
	if(a != b)
	cout<<"\n\t(a != b : TRUE)\n\t*1st complex number is not equal to 2nd complex number*\n\n";
	else
	cout<<"\n\t(a != b : FALSE)\n\t*1st complex number is equal to 2nd complex number*\n\n";
	

}

		
	

 



