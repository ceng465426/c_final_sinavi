#include <stdio.h>

struct simpleStruct {
	int m1;
	char m2;
	float m3;
};

int myStructCompare(const struct simpleStruct* param1, const struct simpleStruct* param2);

// ornek program: main2.c
int main ()
{
	struct simpleStruct myStruct1, myStruct2;

	myStruct1.m1 = 10;
	myStruct1.m2 = 'a';
	myStruct1.m3 = 2.1;

	myStruct2.m1 = 9;
	myStruct2.m2 = 'a';
	myStruct2.m3 = 2.1;

	if(myStructCompare(&myStruct1, &myStruct2))
		printf("ELEMANLAR AYNIDIR\n");
	else
		printf("ELEMANLAR AYNI DEGILDIR\n");

	return 0;
}

////////////////////////////////////////////////////////////
//myStructCompare() FONKSIYONUNUN TANIMINI ASAGIYA KOPYALAYIN
////////////////////////////////////////////////////////////
