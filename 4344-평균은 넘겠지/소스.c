#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int size,student;
	scanf("%d", &size);

	int grade[1000];
	
	for (int i = 0; i < size; i++)
	{
		int sum = 0, avg = 0;

		scanf("%d", &student);
		for (int j = 0; j < student; j++)
		{
			scanf("%d", &grade[j]);
			sum += grade[j];
		}
		avg = sum / student;
		//printf("%d %d\n", sum, avg);

		double count = 0;
		double percentage;
		for (int i = 0; i < student; i++)
		{
			if (grade[i] > avg)
				count++;
		}

		//printf("%d\n", count);
		percentage = count / student * 100;

		printf("%.3lf%%\n", percentage);
	}
	
}