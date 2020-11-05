#include <stdio.h>
#include "rdfw.h"
#define SZ 20
int main(void)
{
	char word[SZ];
	
	puts("Введите строку.");
	readFirstWord(word);
	printf("Вы ввели строку: %s\n", word);
	
	return 0;
}