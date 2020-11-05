#include <stdio.h>
#include "reverse.h"
#define SZ 21
int main(void)
{
	char str[SZ];
	char * ps;
	
	puts("Введите строку не более 20 символов или Enter для выхода:");
	
	while ( gets(str) && str[0] != '\0' )
	{
		printf("Вот строка, которую вы ввели: %s\n", str);
		ps = reverse(str);
		printf("Вот реверсированная строка: %s\n", ps);
		puts("Введите строку не более 20 символов или Enter для выхода:");
	}
	puts("Программа завершена.\nВсего хорошего!");
	
	return 0;
}