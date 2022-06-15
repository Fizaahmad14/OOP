/*Fiza Ahmad
  i200506-C
  Assignment 2 */
#include "Rope.cpp" 
#include "Pully.cpp" 
#include "Rotation.h"
#include <iostream>
#include <string>
using namespace std;


//destructor
Rotation::~Rotation() {}

//defining the function Rotating the pully

int Rotation::RotatingthePully(double rad,double len ,double thick)
{
	//setting circumfernce
	
	double circumference;
	
	//initializing no of rings with zero
	
	int noOfRings = 0; 
	
	//while length is greater then cicumference count number of rings
	
	while(len>circumference)
	{
		//set circumference 
		
		p.setCircumference(rad);
		
		//get circumference
		
		circumference = p.getCircumference();
		
		//subtracting circumfernece from updated length
		
		len-=circumference; 
		
		//adding thickness to radius for the next iterartion
		
		rad+=thick;
		
		//incrementing number of rings
		
		noOfRings++;
	}
	//returning number of rings
	
	return noOfRings;
}
 


