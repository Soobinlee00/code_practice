#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

int main(void)
{
	int number[10];
	int sum = 0;
	int result[10] = {0,};
	int bigger = 0;
	int smaller = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &number[i]);
		sum += number[i];

		result[i] = sum;
	}

	for (int i = 1; i < 10; i++)
	{
		//printf("%d  ", result[i]);
		if (result[i] >= 100)
		{
			bigger = result[i];
			smaller = result[i - 1];
			break;
		}
		else {
			smaller = sum;
		}
		
	}
	//printf("\n%d %d\n", bigger-100, 100-smaller);

	if ((abs(bigger - 100) <= abs(100 - smaller)) || (bigger == 100))
		printf("%d", bigger);
	else
		printf("%d", smaller);
}