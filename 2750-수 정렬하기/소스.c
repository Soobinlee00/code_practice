#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int number;
	scanf("%d", &number);

	int array[1000];

	for (int i = 0; i < number; i++)
	{
		scanf("%d", &array[i]);
	}

	int buffer = 0;
	for (int i = 0; i < number; i++)
	{
		for (int j = 0; j < number-1; j++)
		{
			if (array[j] > array[j + 1])
			{
				buffer = array[j + 1];
				array[j + 1] = array[j];
				array[j] = buffer;
			}
		}
	}

	for (int i = 0; i < number; i++)
		printf("%d\n", array[i]);
}