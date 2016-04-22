
void myStringSearch(const char *param1, const char param2, int *param3){
	
	int i, say=0;
	char* x = param1;
	for (i=0; ;i++)
	{
		if (*x == '\0') break;
		say++;
		x++;
	}

	char* a = param1;
	char* b = param2;

	for (i=0; i<say ;i++)
	{
		if ( *a == b )
		{

			*param3 = i;
			return 0;
		}
		a++;
	}
	*param3 = -1;
	return 0;
	
}



int myStructCompare(const struct simpleStruct* param1, const struct simpleStruct* param2){


	
	
	if (param1->m1 ==  param2->m1)
	{
		if (param1->m1 == param2->m1)
		{
			if (param1->m1 == param2->m1)
			{
				return 1;
			}
		}
	}
	
	return 0;
}


void mySubtract(const int *param1, const int *param2, int *param3){
	
	*param3 = *param1 - *param2;
	
}


void myMode(const int *param1, const int param2, int *param3){
	
	int i,j,k;
	int b = param2;
	int a[21];
	int* x = *param1;
	
	
	for (i=0; i<b;i++)
	{
		k = *param1;
		for (j=i; j<b; j++)
		{
			if( k == *param1 )
			{
				a[k]++;
			}
			param1++;
		}
		
	}
	
}
