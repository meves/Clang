#include <stdio.h>
#include <string.h>
#include "space.h"
#define SIZE 81
int main(void)
{
	char buf[SIZE];
	const char * ptr;
	
	puts("Введите строку не более 80 символов или Enter для выхода:");
	gets(buf);
	while (*buf)
	{
		ptr = space(buf);
		if (*ptr == ' ')
		{
			puts(ptr);
			printf("Символ 'пробел', находится по адресу %p\n", ptr);
		}
		else if (*ptr == '\0')
		{
			puts(ptr);
			printf("Символ 'конец строки', находится по адресу %p\n", ptr);
		}
		else
			printf("Что-то пошло не так!\n");
		puts("Введите следующую строку не более 80 символов или Enter для выхода:");
		gets(buf);
	}
	puts("Всего хорошего!");
	
	return 0;
}