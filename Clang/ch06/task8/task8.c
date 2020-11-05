// task7.c - работает с вещественными числами
#include <stdio.h>
double func (double, double);
int main(void)
{
	double num1, num2;
	
	printf("Введите два числа с плавающей запятой "
			"или любой символ для выхода: ");
	while(scanf("%lf %lf", &num1, &num2) == 2)	
	{
		printf("(num1 - num2) / (num1 * num2) = %g\n");
		printf("Введите два числа с плавающей запятой"
			"или любой символ для выхода: ");
	}		
	
	return 0;
}

double func(double num1, double num2)
{
	return (num1 - num2) / (num1 * num2);
}