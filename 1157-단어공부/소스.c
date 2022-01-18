#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[1000000];
	char mostnum[26] = { 0, };

	scanf("%s", word);

	int length;
	length = strlen(word);

	for (int i = 0; i < length; i++)
	{
		if (word[i] >= 'a' && word[i] <= 'z')
		{
			mostnum[word[i] - 'a']++;
		}
		else if (word[i] >= 'A' && word[i] <= 'Z')
		{
			mostnum[word[i] - 'A']++;
		}
	}

	int max = mostnum[0];
	int final_letter = 0;
	int result = 0;

	for (int i = 1; i < 26; i++) {
		if (max < mostnum[i])
		{
			max = mostnum[i]; 
			final_letter = i;
			result = 1;
		}
	}

	for (int i = 0; i < 26; i++) 
	{
		if (max == mostnum[i]) 
			result++;
	}

	if (result > 1)
		printf("?"); // 만약 2개 이상 많이 사용된 알파벳이 있다면 ? 출력 
	else 
		printf("%c", final_letter + 'A'); 

}