// power.c - возведение чисел в целую степень
#include <stdio.h>
double power(double n, int p);

int main(void)
{
	double x, xpow;
	int exp;
	
	printf("Введите число и положительную целую степень,"
	" в которую\nчисло будет возведено. Для завершения "
	"программы введите q.\n");
	while(scanf("%lf%d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%.3g в степени %d равно %.5g\n", x, exp, xpow);
		printf("Введите следующую пару чисел или q для завершения.\n");
	}
	printf("Надеемся, вас удовлетворило качество программы - до свидания!\n");
	
	return 0;
}

double power(double n, int p)
{
	double pow = 1.0;
	int i;
	
	for(i = 1; i <= p; i++)
		pow *= n;
	
	return pow;
}