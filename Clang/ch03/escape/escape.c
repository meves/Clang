// escape.c - использование символов управляющих последовательностей
#include <stdio.h>
int main(void)
{
	float salary;
	
	printf("\aВведите предпочитаемую вами сумму месячного жалования:");
	printf(" $_______\b\b\b\b\b\b\b");
	scanf("%f", &salary);
	printf("\n\t$%.2f в месяц соответствует $%.2f в год.", salary, salary*12);
	printf("\rОго!\n");
	
	return 0;
}