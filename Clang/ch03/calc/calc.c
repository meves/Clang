// calc.c - калькулятор
#include <stdio.h>
int main(void)
{
	int num1, num2;
	
	printf("Введите первое целое число: ");
	scanf("%d", &num1);
	printf("Введите второе целое число: ");
	scanf("%d", &num2);
	printf("Вот сумма числа %#X и числа %#X в шестнадцатеричной форме %#X\n", num1, num2, num1+num2);
	
	return 0;
}