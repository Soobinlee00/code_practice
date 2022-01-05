#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, v, semifinal;
	int new = 0;
	int count = 0;

	scanf("%d %d %d", &a, &b, &v);

	while (new < v)
	{
		new = new + a;
		count++;

		if (new >= v)
			break;

		semifinal = new - b;
		new = semifinal;
	}


	printf("%d", count);

}