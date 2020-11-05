// task3.c - читает поток символов и считает буквы верхнего и нижнего регистров
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main(void)
{
	int ch;
	int upper, lower;
	
	upper = 0;
	lower = 0;	
	while ((ch = getchar()) != EOF)
	{
		if (isupper(ch))
			++upper;
		if (islower(ch))
			++lower;
	}
	
	printf("Символов верхнего регистра: %d\n"
			"Символов нижнего регистра: %d\n", upper, lower);
	
	return 0;
}
/*
while ((ch = getchar()) != EOF)
	{
		if (65 <= ch && ch <= 90)
			++upper;
		else if (97 <= ch && ch <= 122)
			++lower;
	}
*/	