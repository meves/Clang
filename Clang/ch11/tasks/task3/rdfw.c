// rdfw.c -- читает первое слово строки
#include <stdio.h>

void readFirstWord(char * buf)
{
	char ch;
	
	// чтение первого слова
	ch = getchar();
	while (ch != '\t' && ch != ' ' && ch != '\n')
	{
		*buf++ = ch;
		ch = getchar();
	}
}