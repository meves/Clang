#include <stdio.h>
#include "fnsym.h"
#define SZ 81
int main(void)
{
	char string[SZ];
	char ch;
	char * ptr;
		
	puts("Введите строку не более 80 символов:");
	fgets(string, SZ, stdin);
	// цикл поиска символа
	puts("Введите символ для поиска в строке или '#' для выхода:");
	while ((ch = readFirstSymbol()) != '#')
	{
		ptr = fndsmbl(string, ch);
		if (ptr != NULL)
			printf("Символ: %c, индекс: %d\n", *ptr, ptr - string);
		else
			puts("Такого символа нет! Попробуйте еще раз.");	
		puts("Введите символ для поиска в строке или '#' для выхода:");
	}
	puts("Всего хорошего!");
	
	return 0;
}