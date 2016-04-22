#include <stdio.h>

void myStringSearch(const char *param1, const char param2, int *param3);

int main ()
{
	char myString[] = "aabb";
	char charToFind = 'c';

	int result;

	myStringSearch(myString, charToFind, &result);

	if( result != -1){
            printf("KARAKTER BULUNDU: %d\n", result);
	} else {
            printf("KARAKTER BULUNAMADI\n");
	}


	return 0;
}

////////////////////////////////////////////////////////////
//myStringSearch() FONKSIYONUNUN TANIMINI ASAGIYA KOPYALAYIN
////////////////////////////////////////////////////////////
