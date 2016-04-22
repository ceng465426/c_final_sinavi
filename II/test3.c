#include <stdio.h>

void myAddition(const int *param1, const int *param2, int *param3);

// ornek program: main1.c
int main ()
{
	int myVar1 = 20;
	int myVar2 = 10;
	int myVar3;

	myAddition(&myVar1, &myVar2, &myVar3);

    printf("TOPLAMA ISLEMI SONUCU: %d\n", myVar3);

	return 0;
}

////////////////////////////////////////////////////////////
//myAddition() FONKSIYONUNUN TANIMINI ASAGIYA KOPYALAYIN
////////////////////////////////////////////////////////////
void myAddition(const int *param1, const int *param2, int *param3)
{
	*param3=*param1+*param2;
}
