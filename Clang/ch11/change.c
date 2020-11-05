// change.c -- получаем строку в программе с защитой от переполнения
#include <stdio.h>
#include <string.h>
#define SIZE 80

int main(void)
{
	char line[SIZE];
	char * find;
	
	puts("Введите строку:");
	fgets(line, SIZE, stdin);
	find = strchr(line, '\n');
	if (find)
		*find = '\0';
	puts(line);
	
	return 0;
}