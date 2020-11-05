// rdfsym.c -- читает и возвращает первый символ ввода
#include <stdio.h>
char readFirstSymbol(void)
{
	char ch, temp;
	// получает первый символ
	ch = getchar();
	// очищает стандартный ввод
	while ((temp = getchar()) != '\n');
	
	return ch;
}