/*Fiza Ahmad
  i200506-C
  Assignment 3
  Question no 1
  */
#include "Polynomial.h"  
#include <iostream>
using namespace std;
int main()
{
	Polynomial poly1,poly2,poly3,poly4,add,sub,add_assign,sub_assign;
	cout<<"\n*--Enter 1st Polynomial\n";
	cin>>poly3;
	poly1 = poly3;
	cout<<"\n\t1st Polynomial = "<<poly1;
	cout<<"\n\n*--Enter 2nd Polynomial\n";
	cin>>poly4;
	poly2 = poly4;
	cin.ignore();
	cout<<"\n\t2nd Polynomial = "<<poly2;
	add_assign = poly1;
	sub_assign = poly1;
	add        = poly1 + poly2;
	cout<<"\n\n*--ADDITION--*\n";
	cout<<"\n\t( poly1 + poly2 )\n";
	cout<<"\t--> Polynomial = "<<add<<endl;
	sub        = poly1 - poly2;
	cout<<"\n*--SUBTRACTION--*\n";
	cout<<"\n\t( poly1 - poly2 )\n";
	cout<<"\t--> Polynomial = "<<sub<<endl;
	add_assign += poly2;
	cout<<"\n*--ADD_ASSIGN--*\n";
	cout<<"\n\t( poly1 += poly2 )\n";
	cout<<"\t--> Polynomial = "<<add_assign<<endl;
	sub_assign -= poly2;
	cout<<"\n*--SUB_ASSIGN--*\n";
	cout<<"\n\t( poly1 -= poly2 )\n";
	cout<<"\t--> Polynomial = "<<sub_assign<<endl;
	cout<<"\n*--EQUAL COMPARISON--*\n";
	if(poly1 == poly2)
	cout<<"\n\t(poly1 == poly2 : TRUE)\n\t*1st Polynomial is equal to 2nd Polynomial*\n\n";
	else
	cout<<"\n\t(a == b : FALSE)\n\t*1st Polynomial is not equal to 2nd Polynomial*\n\n";
	
	
//	cout<<"\n\t( b + a )\n";
	/*add = b + a;
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
	cout<<"\n\t(a != b : FALSE)\n\t*1st complex number is equal to 2nd complex number*\n\n";*/
	

}

		
	

 



