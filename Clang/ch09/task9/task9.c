// binary.c - печатает целые числа в двоичной форме
#include <stdio.h>

void to_diffrent(unsigned long n, unsigned int c);
int main(void)
{
	unsigned long number;
	unsigned int count;
	
	printf("Введите целое число и основание системы счисления от 2 до 10 "
			"(или q для завершения программы):\n");
	while ( scanf("%ld %ud", &number, &count) == 2 )
	{
		if(count >= 2 && count <= 10)
		{
			printf("Эквивалент в выбранной системе счисления: ");
			to_diffrent(number, count);
			putchar('\n');
		}
		printf("Введите целое число и основание системы счисления от 2 до 10 "
				"(или q для завершения программы):\n");
	}
	printf("Программа завершена.\n");
	
	return 0;
}

void to_diffrent(unsigned long n, unsigned int c)
{
	#define CHAR 48
	int r;
	
	r = n % c;
	if ( n >= c)
		to_diffrent(n / c, c);
	
	putchar(r + CHAR);
	
	return;	
}