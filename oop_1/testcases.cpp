#include "submission.cpp"
#include <gtest/gtest.h>

//-------------------Question No 1A-----------------
TEST(Question1a, First) {
	char t1[]="THIS IS OOP ASSIGNMENT 1";
	ASSERT_EQ(24,Strlen(t1));
}

TEST(Question1a, Second) {
	char t2[]="Length Test String";
	ASSERT_EQ(18,Strlen(t2));
}

//-------------------Question No 1B-----------------

TEST(Question1b, First) {
	char* t1=0;
	char* t2=(char*)"Hello World";
	char* act_res=(char*)"Hello World";
	char* r=Strcpy(t1,t2);
	for(int i=0; i<12;i++)
	ASSERT_EQ(act_res[i],r[i]);
}


//-------------------Question No 1C-----------------
TEST(Question1d, First) {
	char* t1=(char*)"Hello";
	char* t2=(char*)"World";
	ASSERT_GT(0,StrCmp(t1,t2));
}

TEST(Question1d, Second) {
	char* t1=(char*)"Test";
	char* t2=(char*)"Test";
	ASSERT_EQ(0,StrCmp(t1,t2));
}

TEST(Question1d, Third) {
	char* t1=(char*)"String";
	char* t2=(char*)"Strang";
	ASSERT_LT(0,StrCmp(t1,t2));
}

//-------------------Question No 1D-----------------
TEST(Question1e, First) {
	char t1[]="Test String";
	char** r;
	int size=0;
	StrTok(t1,' ',r,size);
	ASSERT_EQ('T',r[0][0]);
	ASSERT_EQ('s',r[0][2]);
	ASSERT_EQ('t',r[0][3]);

	ASSERT_EQ('S',r[1][0]);
	ASSERT_EQ('r',r[1][2]);
	ASSERT_EQ('g',r[1][5]);
	
	ASSERT_EQ(2,size);
	
}

TEST(Question1e, Second) {
	char t1[]="Object?Oriented?Programming";
	char** r;
	int size=0;
	StrTok(t1,'?',r,size);
	ASSERT_EQ('O',r[0][0]);
	ASSERT_EQ('c',r[0][4]);
	ASSERT_EQ('j',r[0][2]);

	ASSERT_EQ('O',r[1][0]);
	ASSERT_EQ('n',r[1][4]);
	ASSERT_EQ('r',r[1][1]);

	ASSERT_EQ('P',r[2][0]);
	ASSERT_EQ('a',r[2][5]);
	ASSERT_EQ('i',r[2][8]);
	
	ASSERT_EQ(3,size);

}

//-------------------Question No 1E-----------------
TEST(Question1f, First) {
	char t1[]="Hello World Hello";
	char t2[]="lo";
	int* arr;
	int size=0;
	ASSERT_EQ(true,StrFind(t1,t2,arr,size));
	ASSERT_EQ(3,arr[0]);
	ASSERT_EQ(15,arr[1]);
	ASSERT_EQ(2,size);

}

TEST(Question1f, Second) {
	char t11[]="stringTestStrTest";
	char t22[]="st";
	int* arr;
	int size=0;
	ASSERT_EQ(true,StrFind(t11,t22,arr,size));
	ASSERT_EQ(0,arr[0]);
	ASSERT_EQ(8,arr[1]);
	ASSERT_EQ(15,arr[2]);
	ASSERT_EQ(3,size);
}

TEST(Question1f, Third) {
	char t11[]="stringTestStrTest";
	char t22[]="strang";
	int* arr;
	int size=0;
	ASSERT_EQ(false,StrFind(t11,t22,arr,size));
}

//-------------------Question No 1F-----------------
TEST(Question1g, First) {
char **t11= new char*[6];
t11[0]=new char[5];
t11[0][0]='T';t11[0][1]='h';t11[0][2]='i';t11[0][3]='s';
t11[0][4]='\0';
t11[1]=new char[3];
t11[1][0]='i';t11[1][1]='s';t11[1][2]='\0';
t11[2]=new char[4];
t11[2][0]='t';t11[2][1]='h';t11[2][2]='e';t11[2][3]='\0';
t11[3]=new char[6];
t11[3][0]='f';t11[3][1]='i';t11[3][2]='r';t11[3][3]='s';
t11[3][4]='t';t11[3][5]='\0';
t11[4]=new char[4];
t11[4][0]='O';t11[4][1]='O';t11[4][2]='P';t11[2][3]='\0';
t11[5]=new char[11];
t11[5][0]='a';t11[5][1]='s';t11[5][2]='s';t11[5][3]='i';
t11[5][4]='g';t11[5][5]='n';
t11[5][6]='m';t11[5][7]='e';t11[5][8]='n';t11[5][9]='t';
t11[5][10]='\0';


	bool r=StrSwapIn2DArray(t11,6, 2,5);
	
	ASSERT_EQ(true,r);
	
	ASSERT_EQ('a',t11[2][0]);
	ASSERT_EQ('t',t11[5][0]);
	
	ASSERT_EQ('i',t11[2][3]);
	ASSERT_EQ('\0',t11[5][3]);
    
    	ASSERT_EQ('n',t11[2][8]);
    
}
//-------------------Question No 2A-----------------
TEST(Question2a, First) {
	int arr[] = {2,5,9,8,1,10,11,13,6};
	ASSERT_EQ(6,find(arr,9,11));
	ASSERT_EQ(-1,find(arr,9,30));
	ASSERT_EQ(3,find(arr,9,8));

}

//-------------------Question No 2B-----------------
TEST(Question2b, First) {
	char t1[]="Hello World";
	replace(t1,'l','a');
	ASSERT_EQ('e',t1[1]);
	ASSERT_EQ('a',t1[2]);
	ASSERT_EQ('a',t1[3]);
	ASSERT_EQ('a',t1[9]);
	ASSERT_EQ('d',t1[10]);

}

TEST(Question2b, Second) {
	char t1[]="Test String";
	replace(t1,'t','p');
	ASSERT_EQ('T',t1[0]);
	ASSERT_EQ('p',t1[3]);
	ASSERT_EQ('p',t1[6]);
	ASSERT_EQ('i',t1[8]);

}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
