// flet.c -- получает первый символ с устройства 
// 			 ввода
#include <stdio.h>
char flet(void)
{
	char ch, temp;
	// получает первый символ
	ch = getchar();
	// очищает стандартный ввод
	while ((temp = getchar()) != '\n');
	
	return ch;
}