/*Fiza Ahmad
  i200506-C
  Assignment 2 */
#include "employee.h"  
#include <iostream>
#include <string>
using namespace std;

	//defining default costructor
	
	Employee::Employee()
	{
		salary = new double[0];	
	}
	
	//destructor
	
	Employee::~Employee() {}
	
	//parameterized constructor
	
	Employee::Employee(double sa)
	{
		*salary = sa;	
	}
	
	//copy constructor
	
	Employee::Employee(Employee &Copy)
	{
		salary = Copy.salary;
	}
	
	//setting the salary
	
	void Employee::setter(double se)
	{
		*salary = se;
		//cout<<*salary<<endl;
	}
	
	//dynamically allocated the memory through copy constructor
	
	Employee** Employee::Temporary(Employee e[])
	{
		static Employee **SI = new Employee*[10];
			for (int i=0;i<10;i++)	
			{
				SI[i]=new Employee(e[i]);
			}
	return SI;
	}
	
	//calculation and sorting
	
	double  Calculate(Employee **e1, Employee e2[], int e3)
	{
		double sort_2d,sort_1d,bonus;
		//sorting thr slaries of employess
		for(int i = 0; i < 10; i++)
		{
	      		for(int j = 0; j < 9; j++)
	      		{
	       		if(*(e1[j]->salary)>*(e1[i]->salary))
	       		{
	               		sort_2d          = *(e1[i]->salary);
					*(e1[i]->salary) = *(e1[j]->salary);
	                 		*(e1[j]->salary) = sort_2d;
	                	}
	       	}
		}
		//sorting
		for(int i = 0; i <10; i++)
		{
	      		for(int j = 0; j < 9; j++)
	      		{
	       		if(*(e2[j].salary)>*(e2[i].salary))
	       		{
	               	 	sort_1d         = *(e2[i].salary);
					*(e2[i].salary) = *(e2[j].salary);
	                		*(e2[j].salary) = sort_2d;
	                	}
	       	}
		}
	}
		//return bonus;
		return 0;
	}	
	
	



