#include <stdio.h>

double min(double first, double second);

int main(void)
{
	double first, second;
	
	printf("Введите два числа: ");
	scanf("%lf %lf", &first, &second);
	
	printf("Минимальное значение из %g и %g = %g\n", 
			first, second, min(first, second));
		
	return 0;
}