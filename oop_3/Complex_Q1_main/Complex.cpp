/*Fiza Ahmad
  i200506-C
  Assignment 3
  Question no 1
  */
#include "Complex.h"  
#include <iostream>
using namespace std;

	
	Complex::Complex():real(0),imag(0){} //initializing default constructor
	Complex::Complex(double real = 0 , double imag = 0): real(real) , imag(imag) {} //initializing parameterized constructor
	void  Complex::setReal(double real){this->real = real;} //setting real part
	void  Complex::setImag(double imag){this->imag = imag;} //seting imaginary part
	double   Complex::getReal(){return this->real;} //getiing real part
	double   Complex::getImg(){return this->imag;} //getting imaginary part
	
	Complex Complex::operator+(Complex &a)//overloading plus operator
	{
		double r = a.real + this->real;
		double i = a.imag + this->imag;
		Complex add(r,i);
		return add;
	}
	Complex Complex::operator-(Complex &a)//overloading minus operator
	{
		double r = this->real - a.real;
		double i = this->imag - a.imag;
		Complex sub(r,i);
		return sub;
	}
	Complex Complex::operator=(const Complex &a)//overloading equals to operator
	{
		this->real = a.real ;
		this->imag = a.imag ;
		Complex equ(real,imag);
		return equ;
	}
	Complex Complex::operator*(Complex &a)//overloading multiplication operator
	{
		double r = (a.real*this->real - a.imag*this->imag);
		double i = (a.real*this->imag + a.imag*this->real);
		Complex mul(r,i);
		return mul;
	}
	Complex Complex::operator/(Complex &a)//overloading divison operator
	{
		double r = (a.real*this->real + a.imag*this->imag)/((a.real*a.real)+(a.imag*a.imag));
		double i = (a.real*this->imag - a.imag*this->real)/((a.real*a.real)+(a.imag*a.imag));
		Complex div(r,i);
		return div;
	}
	Complex Complex::operator+=(Complex &a)//overloading add_assign operator
	{
		this->real += a.real;
		this->imag += a.imag;
		return (*this);
	}
	Complex Complex::operator-=(Complex &a)//overloading sub_assign operator
	{
		this->real -= a.real;
		this->imag -= a.imag;
		return (*this);
	}
	Complex Complex::operator*=(Complex &a)//overloading mul_assign operator
	{
		
		double r = this->real;
		this->real = (a.real*this->real - a.imag*this->imag);
		this->imag = (a.real*this->imag + a.imag*r);
		return (*this);
	}
	Complex Complex::operator/=(Complex &a)//overloading div_assign operator
	{
		
		double r = this->real;
		this->real = (a.real*this->real + a.imag*this->imag)/((a.real*a.real)+(a.imag*a.imag));
		this->imag = (a.real*this->imag - a.imag*r)/((a.real*a.real)+(a.imag*a.imag));
		return (*this);
	}
	bool Complex::operator==(Complex &a)//overloading equals comparison operator
	{
		
		if(this->real==a.real and this->imag == a.imag)
		return true;
		else
		return false;
	}
	bool Complex::operator!=(Complex &a)//overloading not equal comparison operator
	{
		
		if(this->real==a.real and this->imag == a.imag)
		return false;
		else
		return true;
	}
	bool Complex::operator>(Complex &a)//overloading greater then operator
	{
		if(((this->real*this->real)+(this->imag*this->imag)) > ((a.real*a.real)+(a.imag*a.imag)))
		return true;
		else
		return false;
	}
	bool Complex::operator<(Complex &a)//overloading smaller than operator
	{
		if(((this->real*this->real)+(this->imag*this->imag)) > ((a.real*a.real)+(a.imag*a.imag)))
		return false;
		else
		return true;
	}
	istream& operator>>(istream &in,Complex &a)//overloading istream operator
	{
		cout<<"\n\n\t( OSTREAM )\n";
		cout<<"\t--> Real part          = ";
		in>>a.real;
		cout<<"\t--> Imaginary part     = ";
		in>>a.imag;
		cout<<"\n\t( ISTREAM )";
		return in;
	}
	ostream& operator<<(ostream &out,Complex &a)//overloading ostream operator
	{
		out<<a.real<<" + "<<a.imag<<"i\n";
		return out;
	}
		






