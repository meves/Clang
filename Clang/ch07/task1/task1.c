// task1.c - чтение символов из стандартного ввода
#include <stdio.h>
int main(void)
{
	char ch;
	int countSpace, countNewLine, count;
	
	countSpace = countNewLine = count = 0;	
	while ((ch = getchar()) != '#')
	{
		if (ch == '\n')
			++countNewLine;
		else if (ch == ' ')
			++countSpace;
		else
			++count;
	}
	printf("Символов новой строки: %d, пробелов: %d, прочих символов: %d\n",
						countNewLine, countSpace, count);
	
	return 0;
}