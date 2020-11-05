#include <stdio.h>
#include "string_in.h"
#define SZ1 21
#define SZ2 6
int main(void)
{
	char str1[SZ1];
	char str2[SZ2];
	const char * pch;
	
	puts("Введите первую строку не более 20  симоволов или Enter для выхода:");
	
	while (gets(str1) && str1[0] != '\0')
	{
		puts("Введите вторую строку не более 5 симоволов:");
		gets(str2);
		pch = string_in(str1, str2);
		printf("Строка 1: %s\nСтрока 2: %s\nСтрока 2 в Строке 1: %s\nАдрес символа %p\n", str1, str2, pch, pch);
		puts("Введите первую строку не более 20  симоволов или Enter для выхода:");
	}
	puts("Программа завершена!\nВсего хорошего.");
	
	return 0;
}