// cypher1.c - вносит изменения во входные данные, сохраняя пробелы
#include <stdio.h>
#include <ctype.h> // работает с символами ASCII
#define SPACE ' '
int main(void)
{
	char ch;
	
	while((ch = getchar()) != '\n')
	{
		if(isalpha(ch))
			putchar(ch + 1);
		else
			putchar(ch);
	}
	putchar(ch);
	
	return 0;
}