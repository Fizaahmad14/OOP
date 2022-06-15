/*Fiza Ahmad
  i200506-C
  Assignment 2 */
#include "Rope.h"  
#include <iostream>
#include <cmath>
#include <string>
using namespace std;


	//making object of class Rope

	Rope r;
	
	//initializing default constructor
	
	Rope::Rope()
	{
		length    = 0;
		thickness = 0;
	}
	
	//destructor
	Rope::~Rope() {}
	
	//initializing parameterized constructor
	
	Rope::Rope(double l,double t)
	{
		length    = l;
		thickness = t;
	}
	
	//setting the length
	
	void Rope::setLength(double le)
	{
		length    = le;
	}
	
	//setting the thickness
	
	void Rope::setThickness(double th)
	{
		thickness   = th;
	}
	
	//getting the length
	
	double Rope::getLength()
	{
		return length;
	}
	
	//getting the thickness
	
	double Rope::getThickness()
	{
		return thickness;
	}
