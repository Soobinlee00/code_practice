#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;

	scanf("%d %d", &a, &b);

	int semi_result_a=0, semi_result_b=0;

	while (a!=0) {
		semi_result_a = (semi_result_a * 10) + (a % 10); //��*10 + ������
		a = a / 10; //��
	}

	while (b!=0) {
		semi_result_b = (semi_result_b * 10) + (b % 10);
		b = b / 10;
	}

	int semi_result = semi_result_a + semi_result_b;
	int result = 0;

	while (semi_result!=0) {
		result = (result * 10) + (semi_result % 10);
		semi_result = semi_result / 10;
	}

	printf("%d",result);
}