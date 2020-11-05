#include <stdio.h>
#include <stdlib.h>
#include "sncpy.h"
#define SZ1 10
#define SZ2 20
int main(void)
{
	char dest[SZ1];
	char src[SZ2];
	char * pstr;
	char flet;
		
	puts("Введите строку или Enter для выхода:");
	
	while ((pstr = gets(src)) && pstr[0] != '\0')
	{
		pstr = sncpy(dest, src, SZ1-1);
		pstr[SZ1-1] = '\0';
		printf("Вот ваша строка: %s\n", pstr);
		puts("Введите строку или Enter для выхода:");
	}	
	puts("Программа завершена!");
	
	return 0;
}