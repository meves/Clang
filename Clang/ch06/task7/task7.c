// task7.c - работает с вещественными числами
#include <stdio.h>
int main(void)
{
	double num1, num2;
	
	printf("Введите два числа с плавающей запятой "
			"или любой символ для выхода: ");
	while(scanf("%lf %lf", &num1, &num2) == 2)	
	{
		printf("(num1 - num2) / (num1 * num2) = %g\n", (num1 - num2) / (num1 * num2));
		printf("Введите два числа с плавающей запятой"
			"или любой символ для выхода: ");
	}		
	
	return 0;
}