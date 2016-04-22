void myStringSearch(const char *param1, const char param2, int *param3){
	//KODUNUZU BURAYA YAZIN
	int temp = -1;
	int index = 0;
	
	while ( param1[index] != '\0')
	{
		if ( param1[index] == param2 )
		{
			if ( index >= temp )
			{
				temp = index;
			}
		}
		index++;
	}
	
	*param3 = temp;
	
	
	
}


void myStructAssign(const struct simpleStruct* param1, struct simpleStruct* param2){
	//KODUNUZU BURAYA YAZIN
	param2->m1 = param1->m1;
	param2->m2 = param1->m2;
	param2->m3 = param1->m3;
}

void myAddition(const int *param1, const int *param2, int *param3){
	//KODUNUZU BURAYA YAZIN
	
	*param3 = *param1 + *param2;
}

void myFindStdv(const int *param1, int size, float *param2){
	//KODUNUZU BURAYA YAZIN
	int i;
	float ortalama;
	float toplam = 0;
	float karelerToplami = 0;
	for ( i = 0; i < size; i++ )
	{
		toplam += param1[i];
	}
	
	ortalama = toplam / size;
	
	for ( i = 0; i < size; i++ )
	{
		karelerToplami += (param1[i] - ortalama) * (param1[i] - ortalama);
	}
	
	*param2 = pow(karelerToplami / size, 0.5);
	
	
	
	
}
