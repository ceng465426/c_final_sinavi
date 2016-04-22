#include <stdio.h>

void myStringSearch(const char *param1, const char param2, int *param3);

int main ()
{
	char myString[] = "aabb";
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
	int s=0;
	char *p = param1;
	while(p[s] != '\0')
	{
		if(p[s] == param2)
		{
			*param3 = s+1;
			return;
		}   
		s++;   
	}
}


