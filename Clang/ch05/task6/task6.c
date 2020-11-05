// task6.c - накаопительное сложение суммы квадратов
#include <stdio.h>
int main(void)
{
	int count, sum, limit;
	
	count = 0;
	sum = 0;
	printf("Введите значение порога вычислений\n");
	scanf("%d", &limit);
	while(count++ < limit)
	{
		sum = sum + count * count;
	}
	printf("sum = %d\n", sum);
	
	return 0;	
}