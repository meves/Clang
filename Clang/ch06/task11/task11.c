// task11.c - ряды последовательных вычислений
#include <stdio.h>
#define ONE 1.0L
#define F_STOP 20
#define S_STOP 100
#define TH_STOP 500
int main(void)
{
	int count;
	int i;
	double negOne;
	double sum1, sum2;
	
		
	// ввести заданное количество элементов
	printf("Введите количество суммируемых элементов: ");
	scanf("%d", &count);
	
	sum1 = 0.0;
	sum2 = 0.0;
	negOne = -1.0;
	// рассчитать суммы
	for(i = 1; i <= F_STOP; i++)
	{
		sum1 += ONE / (double)i;
		negOne *= -1;
		sum2 += negOne / (double)i;
	}	
	printf("После 20 итераций sum1 = %g\tsum2 = %g\n", sum1, sum2);
	
	for( ; i <= S_STOP; i++)
	{
		sum1 += ONE / (double)i;
		negOne *= -1;
		sum2 += ONE / (double)i;
	}		
	printf("После 100 итераций sum1 = %g\tsum2 = %g\n", sum1, sum2);
	
	for( ; i <= TH_STOP; i++)
	{
		sum1 += ONE / (double)i;
		negOne *= -1;
		sum2 += ONE / (double)i;
	}
	printf("После 500 итераций sum1 = %g\tsum2 = %g\n", sum1, sum2);
	
	for( ; i <= count; i++)
	{
		sum1 += ONE / (double)i;
		negOne *= -1;
		sum2 += ONE / (double)i;
	}
	printf("После %d итераций sum1 = %g\tsum2 = %g\n", count, sum1, sum2);
	
	return 0;
}