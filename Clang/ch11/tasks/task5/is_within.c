//is_within -- проверяет наличие символа в строке
#include <stdbool.h>
#include <stdio.h>
bool is_within(const char * str, unsigned char ch)
{
	// ищем символ до конца строки
	while (*str != ch && *str != '\0')
		str++;
	
	// если символ не найден
	if (*str == '\0')
		return false;
	// если символ найден
	else
		return true;	
}