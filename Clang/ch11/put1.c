#include <stdio.h>

void put1(const char *);

int main(void)
{
	const char * str = "�� �, �㤨��!";
	
	put1(str);
	
	return 0;
}

void put1(const char * string)
{
	//while (*string != '\0')
	while (*string)
		putchar(*string++);
}