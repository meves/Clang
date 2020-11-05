// quest9.c -- вычисление длины строки
#include <stdio.h>
#include <string.h>
#include "stringlength.h"
#define SIZE 81
int main(void)
{
	char string[SIZE];
	int len;
	
	puts("Введите строку не более 80 символов или Enter для выхода:");
	gets(string);
	while (*string)
	{
		len = stringlength(string);
		printf("Длина строки %d символов\n", len);
		puts("Введите следующую строку не более 80 символов или Enter для выхода:");
		gets(string);
	}
	
	return 0;
}