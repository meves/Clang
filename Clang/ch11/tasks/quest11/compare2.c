// compare2.c
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ANSWER "Grant"
#define MAX 40

char * prepareString(char * str);

int main(void)
{
	char try[MAX];
	
	puts("Кто похоронен в могиле Гранта?");
	gets(try);
	
	prepareString(try);	
	
	while(strcmp(try, ANSWER))
	{
		puts("Нет, неправильно. Попытайтесь еще раз.");
		gets(try);
	}
	puts("Теперь правильно!");
	
	return 0;
}

char * prepareString(char * str)
{
	char * pchar;
	
	pchar = str;
	// Первый символ преобразуется в верхний регистр
	// 	остальные в нижний
	if (*pchar != '\0')
	{	
		toupper(*pchar++);
		while (*pchar)
			tolower(*pchar++);
	}
	return str;
}