/*Fiza Ahmad
  i200506-C
  Assignment 2
  */
#include <iostream>
#include <string>
using namespace std;

//decalring class Pully

class Pully
{

//declaring private data members

private:
	double radius, circumference;
	
//declaring public functions	
	
public:
	Pully()              ;
	~Pully()              ;
	Pully(double r,double c)   ;
	void setRadius(double ra);
	void setCircumference(double ci);
	double getRadius();
	double getCircumference();
}; 


