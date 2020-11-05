// put2.c -- функция puts со счетчиком
#include <stdio.h>

int put2(const char *);

int main(void)
{
	const char * str = "Это строка для вывода на экран и\
 подсчета сииволов";
	int c;
	
	c = put2(str);
	
	printf("Строка содержит %d символов\n", c);
	
	return 0;
}

int put2(const char * string)
{
	int count = 0;
	
	while (*string)
	{
		putchar(*string++);
		count++;
	}
	putchar('\n');
	
	return count;
}
