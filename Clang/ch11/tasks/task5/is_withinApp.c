#include <stdio.h>
#include <stdbool.h>
#include "is_within.h"
#define SZ 81
int main(void)
{
	char str[SZ];
	char ch;	
	char * ptr;
	
	puts("Введите строку не более 80 символов");
	fgets(str, SZ, stdin);
	
	// заменяем символ новой строки на нулевой символ
	ptr = str;
	while (*ptr != '\n')
		ptr++;
	*ptr = '\0';
		
	puts(str);
	
	puts("Введите символ для поиска в строке"
	" или '#' для выхода:");
	
	while ((ch = flet()) != '#')
	{
		if (is_within(str, ch))
			printf("Символ %c найден\n", ch);
		else
			printf("Символ %c не найден\n", ch);
		puts("Введите символ для поиска в строке"
		" или '#' для выхода:");
	}		
	puts("Всего хорощего!");
	
	return 0;
}