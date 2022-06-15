/*Fiza Ahmad
  i200506-C
  Assignment 3
  Question no 1
  */
#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <string>
using namespace std;
class Complex
{
private:
	double real;
	double imag;
public:
	Complex();
	Complex(double real,double imag);
	void setReal(double real);
	void setImag(double imag);
	double getReal();
	double getImg();
	Complex        operator+(Complex &a);
	Complex        operator+=(Complex &a);
	Complex        operator-=(Complex &a);
	Complex        operator-(Complex &a);
	Complex        operator*(Complex &a);
	Complex        operator*=(Complex &a);
	Complex        operator/=(Complex &a);
	Complex        operator/(Complex &a);
	bool           operator==(Complex &a);
	bool           operator!=(Complex &a);
	bool           operator>(Complex &a);
	bool           operator<(Complex &a);
	Complex        operator=(const Complex &a);
	friend ostream& operator<<(ostream &out,Complex &a);
	friend istream& operator>>(istream &in,Complex &a);

}; 
#endif


