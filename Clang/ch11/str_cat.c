// str_cat.c -- объединяет две строки
#include <stdio.h>
#include <string.h>
#define SIZE 80

int main(void)
{
	char flower[SIZE];
	char addon[] = " пахнет как старые валенки.";
	char * pch;
	
	puts("Какой ваш любимый цветок?");
	gets(flower);
	pch = strcat(flower, addon);
	puts(flower);
	puts(addon);
	putchar(*pch);	
	
	return 0;
}