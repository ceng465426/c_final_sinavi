#include <stdio.h>

struct simpleStruct {
	int m1;
	char m2;
	float m3;
};

struct simpleStruct myStructAssign(const struct simpleStruct param1);

// ornek program: main2.c
int main ()
{
	struct simpleStruct myStruct1, myStruct2;

	myStruct1.m1 = 10;
	myStruct1.m2 = 'a';
	myStruct1.m3 = 2.1;

	myStruct2 = myStructAssign(myStruct1);

    printf("ATAMA YAPILMIS STRUCT ELEMANLARI: %d %c %.2f\n", myStruct2.m1, myStruct2.m2, myStruct2.m3);

	return 0;
}

////////////////////////////////////////////////////////////
//myStructAssign() FONKSIYONUNUN TANIMINI ASAGIYA KOPYALAYIN
////////////////////////////////////////////////////////////
struct simpleStruct myStructAssign(const struct simpleStruct param1)
{
	struct simpleStruct s1;
	s1.m1=param1.m1;
	s1.m2=param1.m2;
	s1.m3=param1.m3;
	return s1;	
}
