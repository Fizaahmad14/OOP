/*Fiza Ahmad
  i200506-C
  Assignment 3
  Question no 1
  */
#include <gtest/gtest.h>
// your class header file for Q1
#include"Complex.h"
//#include"Conversion.cpp"
// your class header file for Q2
//#include"Polynomial.h"

/*
QUESTION 1 (class definition and functions prototypes)

The class name : Complex

Constructor prototype : Complex(double real, double imag)

Also create getters for real and imaginary parts as given below
double getReal()
double getImg()

*/
//-------------------Q1-----------------

TEST(Add, Question1) {

	Complex C1(1,2);
	Complex C2(3,6);
	Complex C3;
	C3=C1+C2;
	ASSERT_EQ(C3.getReal(),4);
	ASSERT_EQ(C3.getImg(),8);
}
TEST(Subtract, Question1) {

	Complex C1(1,2);
	Complex C2(3,6);
	Complex C3;
	C3=C2-C1;
	ASSERT_EQ(C3.getReal(),2);
	ASSERT_EQ(C3.getImg(),4);
}
TEST(Multiply, Question1) {

	Complex C1(1,2);
	Complex C2(3,6);
	Complex C3;
	C3=C2*C1;//-9 + 12i
	ASSERT_EQ(C3.getReal(),-9);
	ASSERT_EQ(C3.getImg(),12);
}
TEST(Divide, Question1) {

	Complex C1(1,2);
	Complex C2(3,6);
	Complex C3;
	C3=C2/C1;
	ASSERT_EQ(C3.getReal(),3);
	ASSERT_EQ(C3.getImg(),0);
}
TEST(Add_Assign, Question1) {

	Complex C1(1,2);
	C1+=C1;
	ASSERT_EQ(C1.getReal(),2);
	ASSERT_EQ(C1.getImg(),4);
}
TEST(Sub_Assign, Question1) {

	Complex C1(1,2);
	Complex C2(3,6);
	C2-=C1;
	ASSERT_EQ(C2.getReal(),2);
	ASSERT_EQ(C2.getImg(),4);
}
TEST(Mul_Assign, Question1) {

	Complex C1(1,2);
	Complex C2(3,6);
	C2*=C1;
	ASSERT_EQ(C2.getReal(),-9);
	ASSERT_EQ(C2.getImg(),12);
}
TEST(Div_Assign, Question1) {

	Complex C1(1,2);
	Complex C2(3,6);
	C2 /= C1;
	ASSERT_EQ(C2.getReal(),3);
	ASSERT_EQ(C2.getImg(),0);
}

TEST(Equal, Question1) {

	Complex C1(1,2);
	Complex C2;
	C2 = C1;
	ASSERT_EQ(C2.getReal(),1);
	ASSERT_EQ(C2.getImg(),2);
}
TEST(EqualComparison, Question1) {

	Complex C1(1,2);
	Complex C2(1,2);
	bool check;
	if(C2 == C1)
		check=true;
	else
		check=false;
	ASSERT_TRUE(check);
	
}
TEST(EqualComparisonNot, Question1) {

	Complex C1(1,2);
	Complex C2(1,2);
	bool check;
	if(C2 != C1)
		check=false;
	else
		check=true;
	ASSERT_TRUE(check);
	
}
TEST(Greater, Question1) {

	Complex C1(1,2);
	Complex C2(4,5);
	bool check;
	if(C2 > C1)
		check=true;
	else
		check=false;
	ASSERT_TRUE(check);
	
}
TEST(Less, Question1) {

	Complex C1(1,2);
	Complex C2(4,5);
	bool check;
	if(C1 < C2)
		check=true;
	else
		check=false;
	ASSERT_TRUE(check);
	
}
/*
QUESTION 2 (class definition and functions prototypes)

The class name : Polynomial

Constructor prototype : Polynomial(double *poly, int degree)

Also create getters for poly and degree
double getPoly()
double getDegree()

*/
//-------------------Q2-----------------
/*double * polynomialOne(){
double* poly= new double [5];
poly[0]=3;
poly[1]=2;
poly[2]=2;
poly[3]=1;
poly[4]=1;

return poly;
}
double * polynomialTwo(){
double* poly= new double [5];
poly[0]=5;
poly[1]=2;
poly[2]=4;
poly[3]=1;
poly[4]=3;

return poly;
	
}
TEST(Add_Poly, Question2) {
	double result[5]= { 8, 2, 6, 1, 4 }; 
	double * one =polynomialOne();
	double * two =polynomialTwo();
	Polynomial P1(one,2);
	Polynomial P2(two,2);
	Polynomial P3(one,2);
	P3=P1+P2;
	double* answer=	 P3.getPoly();
	
	for (int i=0; i<5; i++)
	{	
		ASSERT_EQ(answer[i],result[i]);
	}
	
}
TEST(Sub_Poly, Question2) {
	double result[5]= { 2, 2, 2, 1, 2 }; 
	double * one =polynomialOne();
	double * two =polynomialTwo();
	Polynomial P1(one,2);
	Polynomial P2(two,2);
	Polynomial P3(one,2);
	P3=P2-P1;
	double* answer=	 P3.getPoly();
	
	for (int i=0; i<5; i++)
	{	ASSERT_EQ(answer[i],result[i]);
	}
	
}
TEST(Sub_Assign, Question2) {
	double result[5]= { 2, 2, 2, 1, 2 }; 
	double * one =polynomialOne();
	double * two =polynomialTwo();
	Polynomial P1(one,2);
	Polynomial P2(two,2);
	P2-=P1;
	double* answer=	 P2.getPoly();
	
	for (int i=0; i<5; i++)
	{	
		ASSERT_EQ(answer[i],result[i]);
	}
	
}
TEST(Add_Assign, Question2) {
	double result[5]= { 6, 2, 4, 1, 2 }; 
	double * one =polynomialOne();
	Polynomial P1(one,2);
	P1+=P1;
	double* answer=	 P1.getPoly();
	
	for (int i=0; i<5; i++)
	{	
		ASSERT_EQ(answer[i],result[i]);
	}
	
}
TEST(Equate, Question2) {
	double result[5]= { 3, 2, 2, 1, 1 }; 
	double * one =polynomialOne();
	double * two =polynomialTwo();
	Polynomial P1(one,2);
	Polynomial P2(two,2);
	P2=P1;
	double* answer=	 P2.getPoly();
	
	for (int i=0; i<5; i++)
	{
		ASSERT_EQ(answer[i],result[i]);
	}
	
}
TEST(Comparison, Question2) {
	double * one =polynomialOne();
	double * two =polynomialTwo();
	Polynomial P1(one,2);
	Polynomial P2(two,2);
	bool check;
	if(P2==P1)
		check=true;
	else
		check=false;
	
		ASSERT_FALSE(check);
	
	
}*/

int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
