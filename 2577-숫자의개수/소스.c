#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int number;
	int result = 1;
	char result_str[100];

	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &number);
		result *= number;
	}

	char count[10] = { 0, };
	int remainder;

	while (result > 0)
	{
		remainder=result % 10;
		count[remainder]++;
		result /= 10;
	}

	for (int i = 0; i < 10; i++)
		printf("%d\n", count[i]);
}