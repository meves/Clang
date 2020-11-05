#include <stdio.h>
#include "dsp.h"
#define SZ 81
int main(void)
{
	char str[SZ];
	char * sws;
	
	puts("Введите строку длиной до 80-ти символов или 'Enter' для завершения:");
	
	while (gets(str) && str[0] != '\0')
	{
		printf("Вот ваша строка: %s\n", str);
		sws = deleteSpaces(str);
		printf("Вот ваша строка без пробелов: %s\n", sws);
		puts("Введите строку длиной до 80-ти символов или 'Enter' для завершения:");
	}
	puts("Всего хорошего!");
	
	return 0;
}