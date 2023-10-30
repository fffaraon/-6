// Massiv.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int a[10];
	for (int i=0; i<10; i++)
	{
		a[i]=rand()% (20 - 0 +1)+0;
	
	}
	int b;
	printf("введите сумму двух чисел: ");
	scanf("%d", &b);
	for (int i=0; i<10; i++)
	{
		for(int j=i+1; j<10; j++)
		{
			int sum;
			sum = a[i]+a[j];
			if (sum == b) 
			{
				printf("%d\t%d\n", a[i],a[j]);
			}
			 
		}
	
	}
	for (int i = 0; i<10; i++)
	{
	printf("%d\n", a[i]);
	}
	return 0;
}

