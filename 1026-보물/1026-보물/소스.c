#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number;
	scanf("%d", &number);

	int arr1[50];
	int arr2[50];

	for (int i = 0; i < number; i++)
	{
		scanf("%d", &arr1[i]);
	}

	for (int i = 0; i < number; i++)
	{
		scanf("%d", &arr2[i]);
	}

	//array arr1 smallest to biggest
	
	int buffer = 0;
	for (int i = 0; i < number; i++)
	{
		for (int j = 0; j < number - 1; j++)
		{
			if (arr1[j] > arr1[j + 1])
			{
				buffer = arr1[j+1];
				arr1[j + 1] = arr1[j];
				arr1[j] = buffer;
			}
		}
		//printf("%d ", arr1[i]);
	}
	//printf("\n");

	for (int i = 0; i < number; i++)
	{
		for (int j = 0; j < number - 1; j++)
		{
			if (arr2[j] < arr2[j + 1])
			{
				buffer = arr2[j + 1];
				arr2[j + 1] = arr2[j];
				arr2[j] = buffer;
			}
		}
		//printf("%d ", arr2[i]);
	}
	//printf("\n");

	int result_arr[50];
	int result = 0;

	for (int i = 0; i < number; i++)
	{
		result_arr[i] = arr1[i] * arr2[i];
		//printf("%d ", result_arr[i]);
		result += result_arr[i];
	}
	printf("%d", result);
}