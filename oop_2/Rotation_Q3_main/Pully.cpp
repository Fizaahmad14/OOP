/*Fiza Ahmad
  i200506-C
  Assignment 2 */
#include "Pully.h"  
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

	//making object of class pully
	
	Pully p;
	
	//initializing default constructor
	
	Pully::Pully()
	{
		radius    = 0;
		circumference = 0;
	}
	
	
	//destructor
	Pully::~Pully() {}
	
	
	//initializing parameterized constructor
	
	Pully::Pully(double r,double c)
	{
		radius    = r;
		circumference = 2*c*3.14;
	}
	
	//setting the radius
	
	void Pully::setRadius(double ra)
	{
		radius    = ra;
	}
	
	//setting the circumference
	
	void Pully::setCircumference(double ci)
	{
		circumference   = 2*ci*3.14;
	}
	
	//getting the radius
	
	double Pully::getRadius()
	{
		return radius;
	}
	
	//getting the circumference
	
	double Pully::getCircumference()
	{
		return circumference;
	}
