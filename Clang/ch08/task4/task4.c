// task4.c - �⠥� �室��� ��⮪ ᨬ������ ��⠥� �।��� ������⢮ �㪢 �� ᫮��
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main(void)
{
	int ch;
	int letters, words;
	bool isWord;

	isWord = false;
	letters = words = 0;
	while ((ch = getchar()) != EOF)
	{
		if (isalpha(ch))
		{
			++letters;
			if (!isWord)
			{
				++words;
				isWord = true;
			}			
		}
		if (isblank(ch) || ch == '\n')
			isWord = false;
	}
	printf("�।��� ������⢮ �㪢 �� ᫮�� = %g\n", (float)letters / words);
	
	return 0;
}