// task5.c - печатает таблицу квадратов и кубов чисел
#include <stdio.h>
int main(void)
{
	int low, high;
	int i;
	
	printf("Введите целое число: ");
	scanf("%d", &low);
	printf("Введите второе целое число, больше первого: ");
	scanf("%d", &high);
		
	printf("Число Квадрат  Куб\n");	
	for(i = low; i <= high; i++)
		printf("%5d %5d %6d\n", i, i*i, i*i*i);
	
	return 0;
}