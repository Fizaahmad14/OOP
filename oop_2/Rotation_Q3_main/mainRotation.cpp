/*Fiza Ahmad
  i200506-C
  Assignment 2 */
#include "Rotation.cpp"
#include <iostream>
#include <string>
using namespace std;
int main()
{

	//asking user to enter thickness,length and radius

	double thickness,length,radius;
	cout<<"\n\t~ Enter following terms in centimeters(cm)\n\n";
	cout<<"\t--> Radius     = ";
	cin>>radius;
	cout<<"\t--> Length     = ";
	cin>>length;
	cout<<"\t--> Thickness  = ";
	cin>>thickness;
	
	//setting length, thickness and radius
	
	r.setThickness(thickness);
	r.setLength(length);
	p.setRadius(radius);
	
	//making the object of class rotatingthePully
	
	Rotation R;
	
	//calling functions to display total number of rings 
	
	cout<<"\n\n\tNumber of rings = "<<R.RotatingthePully(p.getRadius(),r.getLength(),r.getThickness())<<endl<<endl;;
	







return 0;
} 
