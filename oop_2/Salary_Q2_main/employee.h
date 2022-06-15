/*Fiza Ahmad
  i200506-C
  Assignment 2 */
#include <iostream>
#include <string>
using namespace std;
class Employee
{

//declaring private data members

private:

//declaring public functions

	double *salary;
public:
	Employee()                        ;
	~Employee()                       ;
	Employee(double s)                ;
	Employee(Employee &Copy)	   ;
	Employee** Temporary(Employee e[]);
	void setter(double sa)           ;
	friend double Calculate(Employee **e1, Employee e2[], int e3);
	//double print(Employee**,Employee[],int);
};


