/*Fiza Ahmad
  i200506-C
  Assignment 3
  Question no 1
  */
#ifndef Polynomial_H
#define Polynomial_H
#include <iostream>
#include <string>
using namespace std;
class Polynomial
{
private:
	double *poly;
	double degree;
public:
	Polynomial();
	Polynomial(double *poly,int degree);
	void setpoly(double *poly);
	void setdegree(double degree);
	double *getPoly();
	double getDegree();
	Polynomial         operator+(Polynomial &a);
	Polynomial         operator-(Polynomial &a);
	Polynomial         operator-=(Polynomial &a);
	Polynomial         operator+=(Polynomial &a);
	Polynomial         operator=(const Polynomial &a);
	bool            operator==(Polynomial &a);
	friend ostream& operator<<(ostream &out,Polynomial &a);
	friend istream& operator>>(istream &in,Polynomial &a) ;

}; 
#endif


