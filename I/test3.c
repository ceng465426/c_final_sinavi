#include <stdio.h>

void mySubtract(const int *param1, const int *param2, int *param3);

// ornek program: main1.c
int main ()
{
	int myVar1 = 20;
	int myVar2 = 10;
	int myVar3;

	mySubtract(&myVar1, &myVar2, &myVar3);

        printf("CIKARMA ISLEMI SONUCU: %d\n", myVar3);

	return 0;
}

////////////////////////////////////////////////////////////
//mySubtract() FONKSIYONUNUN TANIMINI ASAGIYA KOPYALAYIN
////////////////////////////////////////////////////////////
