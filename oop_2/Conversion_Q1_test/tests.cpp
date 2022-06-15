#include"Conversion.cpp"
//#include"Rotation.cpp"
#include <gtest/gtest.h>
#include<iostream>



//-------------------Q1-----------------

TEST(Question1_1, First) {

	Conversion C("121");
	char* obt_result=C.toDecimal("ABC");
	char*  corr_result="2748";
	for(int j=0;j<strlen(obt_result);j++)
	ASSERT_EQ(corr_result[j],obt_result[j]);
}
/////////////////////////////////////
TEST(Question1_2, second) {
		Conversion C("121");
	int result=C.FindBase("1010");
	ASSERT_EQ(2,result);
}
TEST(Question1_3, third) {
		Conversion C("121");
	int result=C.FindBase("1A10");

	ASSERT_EQ(16,result);
}
TEST(Question1_4, fourth) {
		Conversion C("121");
	int result=C.FindBase("190");
	ASSERT_EQ(10,result);
}
TEST(Question1_5, fifth) {
		Conversion C("121");
	int result=C.FindBase("067");
	ASSERT_EQ(8,result);
}
TEST(Question1_6, sixth) {
		Conversion C("121");
	char* obt_result=C.toOctal("96");
	char*  corr_result="140";
	for(int j=0;j<strlen(obt_result);j++)
	ASSERT_EQ(corr_result[j],obt_result[j]);
}
TEST(Question1_7, seventh) {
		Conversion C("121");
	char* obt_result=C.toBinary("1006");
	char*  corr_result="1111101110";
	for(int j=0;j<strlen(obt_result);j++)
	ASSERT_EQ(corr_result[j],obt_result[j]);
}
//-------------------Q2-----------------
/*TEST(Question2_1, First) {
	static Employee *SI[10];
	Employee e[10],obj,**t;
    for(int k=0;k<10;k++){
         e[k].setSalary(1000+100*k);

    }
    t=obj.Temporary(e);


double result=obj.print(t,e,5);

	ASSERT_EQ(1611,int(result));
}
TEST(Question2_2, second) {
	static Employee *SI[10];
	Employee e[10],obj,**t;
    for(int k=0;k<10;k++){
         e[k].setSalary(1000+100*k);

    }
    t=obj.Temporary(e);

double result=obj.print(t,e,5);    

	ASSERT_EQ(1640,int(result));
}
TEST(Question2_3, third) {
	static Employee *SI[10];
	Employee e[10],obj,**t;
    for(int k=0;k<10;k++){
         e[k].setSalary(1000+100*k);

    }
    t=obj.Temporary(e);


double result=obj.print(t,e,9);    

	ASSERT_EQ(1979,int(result));
}*/

//-------------------Q3-----------------
/*TEST(Question3_1, First) {
		Rotation R;

	int result=R.RotatingthePully(4,400,2);
	ASSERT_EQ(6,result);
}

TEST(Question3_2, Second) {
	Rotation R;
int result=R.RotatingthePully(8,100,1);
	ASSERT_EQ(1,result);
}
TEST(Question3_3, third) {
	Rotation R;
int result=R.RotatingthePully(0,100,1);
	ASSERT_EQ(6,result);
}*/



int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
