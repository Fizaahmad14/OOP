/*Fiza Ahmad
  i200506-C
  Assignment 2
  */
#include <iostream>
#include <string>
using namespace std;

//declaring class Rope

class Rope
{

//declaring private data members

private:
	double length, thickness;
	
//declaring public functions	
	
public:
	Rope()              ;
	~Rope()              ;
	Rope(double l,double t)   ;
	void setLength(double le);
	void setThickness(double th);
	double getLength();
	double getThickness();
}; 


