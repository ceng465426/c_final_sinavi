#include <stdio.h>

void myMode(const int *param1, const int param2, int *param3);

// ornek program: main4.c
int main ()
{
	int myArray[] = {2, 4, 4, 4, 5, 5, 7, 9};
	int result;

	myMode(myArray, 8, &result);

    	printf("MOD: %d\n", result);

	return 0;
}

////////////////////////////////////////////////////////////
//myMode() FONKSIYONUNUN TANIMINI ASAGIYA KOPYALAYIN
////////////////////////////////////////////////////////////
void myMode(const int *param1, const int param2, int *param3){
	int say=0, mod=0;
	int i,j;
	int tsay,tmod;
	for(i=0;i<param2;i++)
	{
		tsay = 1;
		tmod = param1[i];
		for(j=i+1;j<param2;j++)
		{
			if(tmod == param1[j])
				tsay++;
		}
		if(tsay > say)
		{
			say = tsay;
			mod = tmod;
		}
	}
	*param3 = mod;
}
