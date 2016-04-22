#include <stdio.h>

void myStringSearch(const char *param1, const char param2, int *param3);

int main ()
{
	char myString[] = "aabbkaaa";
	char charToFind = 'b';

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
void myStringSearch(const char *param1, const char param2, int *param3){
	int i, indis=0,k=0;
	char* x = param1;
	while(*x != '\0')
	{
		if(*x == param2)
		{
			*param3 = indis;
			k=1;
		}
		indis++;
		x++;
	}
	if(k==0) *param3 = -1;	
}
