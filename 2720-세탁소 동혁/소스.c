#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int number;
	scanf("%d", &number);

	int price;

	int quater;
	int dime;
	int nikel;
	int penny;

	for (int i = 0; i < number; i++)
	{
		scanf("%d", &price);

		quater = 0;
		dime = 0;
		nikel = 0;
		penny = 0;

		while (price > 0)
		{
			if (price >= 25)
			{
				price -= 25;
				quater++;
			}
			else if (price >= 10)
			{
				price -= 10;
				dime++;
			}
			else if (price >= 5)
			{
				price -= 5;
				nikel++;
			}
			else if (price >= 1)
			{
				price -= 1;
				penny++;
			}
		}
		printf("%d %d %d %d\n", quater, dime, nikel, penny);
	}
}