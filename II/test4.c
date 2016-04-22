#include <stdio.h>
#include <math.h>

void myFindStdv(const int *param1, int size, float *param2);

// ornek program: main1.c
int main()
{
	int myArray[] = {2, 4, 4, 4, 5, 5, 7, 9};
	float result;

	myFindStdv(myArray, 8, &result);

    	printf("STANDART SAPMA: %.3f\n", result);

	return 0;
}

////////////////////////////////////////////////////////////
//myFindStdv() FONKSIYONUNUN TANIMINI ASAGIYA KOPYALAYIN
////////////////////////////////////////////////////////////
void myFindStdv(const int *param1, int size, float *param2)
{
	int diziToplam=0, i, *ydk;
	ydk = param1;
	float diziOrtalama, toplam2=0;
	
	for(i=0;i<8;i++)
	{
		diziToplam+=*param1;
		param1++;
	}	
	
	
	diziOrtalama=diziToplam/8;
	*param1--;
	*param1--;
	*param1--;
	*param1--;
	*param1--;
	*param1--;
	*param1--;
	*param1--;
	
	param1 = ydk;
	

	for(i=0;i<8;i++)
	{
		*param1++;
		toplam2+=pow(((*param1)-diziOrtalama),2);
	}
	
	*param2=toplam2;
	
	


	

}	 
