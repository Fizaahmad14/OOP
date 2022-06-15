/*Fiza Ahmad
  i200506-C
  Assignment 3
  Question no 1
  */
#include "Polynomial.h"  
#include <iostream>
using namespace std;

	
	Polynomial::Polynomial():poly(new double[0]),degree(0)
	{
		//for(int i=0; i<(10)+1; i++)
		//poly[i] = 0;
	} //initializing default constructor*/
	Polynomial::Polynomial(double *poly, int degree): poly(new double[(2*degree)+2]) , degree(degree) 
	{
		for(int i=0; i<(this->degree*2)+1; i++)
		this->poly[i] = poly[i];
	}
	void Polynomial::setpoly(double *poly)
	{
		for(int i=0; i<(this->degree*2)+1; i++)
		this->poly[i] = poly[i];
	}//setting poly part
	void  Polynomial::setdegree(double degree){this->degree = degree;} //seting degreeinary part
	double   *Polynomial::getPoly(){return this->poly;} //getiing poly part
	double   Polynomial::getDegree(){return this->degree;} //getting degreeinary part
	
	Polynomial Polynomial::operator+(Polynomial &a)//overloading plus operator
	{
		//if(this->degree == a.degree)
		int d    = this->degree;
		int size = (d*2)+1;
		double *p = new double[size];
		p = this->poly;
		for(int i=0; i<size; i++)
		{
			if(this->poly[2*i+1]==a.poly[2*i+1])
			p[2*i]    = this->poly[2*i]+a.poly[2*i];
		}
		Polynomial add(p,d);
		return add;
	}
	Polynomial Polynomial::operator-(Polynomial &a)//overloading minus operator
	{
		int d    = this->degree;
		int size = (d*2)+1;
		double *p = new double[size];
		p = this->poly;
		for(int i=0; i<size; i++)
		{
			if(this->poly[2*i+1]==a.poly[2*i+1])
			p[2*i]    = this->poly[2*i] - a.poly[2*i];
		}
		Polynomial sub(p,d);
		return sub;
	}
	Polynomial Polynomial::operator-=(Polynomial &a)//overloading minus operator
	{
		int d    = this->degree;
		int size = (d*2)+2;
		double *p = new double[size];
		p = this->poly ;
		for(int i=0; i<size; i++)
		{
			if(this->poly[2*i+1]==a.poly[2*i+1])
			p[2*i]    = this->poly[2*i] - a.poly[2*i];
		}
		this->poly = p;
		return (*this);
	}
	Polynomial Polynomial::operator+=(Polynomial &a)//overloading minus operator
	{
		int d    = this->degree;
		int size = (d*2)+1;
		double *p = new double[size];
		p = this->poly ;
		for(int i=0; i<size; i++)
		{
			if(this->poly[2*i+1]==a.poly[2*i+1])
			p[2*i]    = this->poly[2*i] + a.poly[2*i];
		}
		this->poly = p;
		return (*this);
	}
	Polynomial Polynomial::operator=(const Polynomial &a)//overloading equals to operator
	{
		this->poly = a.poly ;
		this->degree = a.degree ;
		Polynomial equ(poly,degree);
		return equ;
	}
	bool Polynomial::operator==(Polynomial &a)//overloading equals comparison operator
	{
		if(this->poly==a.poly and this->degree == a.degree)
		return true;
		else
		return false;
	}
	
	istream& operator>>(istream &in,Polynomial &a)//overloading istream operator
	{
		cout<<"\n\t( OSTREAM )\n";
		cout<<"\t--> Highest degree  = ";
		in>>a.degree;
		double *ptr = a.poly;
		for(int i=0;i<(2*a.degree)+1;i++)
		{
			cout<<"\t--> Poly-Index ["<<i<<"]  = ";
			in>>ptr[i];
		}
//		Polnomial abc(ptr,de);	
		cout<<"\n\t( ISTREAM )";
		return in;
	}
	ostream& operator<<(ostream &out,Polynomial &a)//overloading ostream operator
	{
		Polynomial c;
		int size = 2*a.degree+1;
		double *ptr = a.poly;
		ptr[size] = 0;
		for(int i=0;i<(2*a.degree)+1/2;i++)
		{
			//out<<a.poly[2*i]<<" "<<a.poly[(2*i)+1]<<" ";
			out<<ptr[2*i]<<" "<<ptr[(2*i)+1]<<" ";
		}
		return out;
	}
		






