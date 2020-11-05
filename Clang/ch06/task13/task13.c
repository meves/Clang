// task13.c 
#include <stdio.h>
#define SIZE 8
int main(void)
{
	// создать два восьмиэлементных массива типа double
	double nums[SIZE], sums[SIZE];
	int i;	

	printf("Введите восемь значений для первого массива: ");
	// в цикле ввести значения восьми элементов первого массива
	scanf("%lf", &nums[0]);
	sums[0] = nums[0];
	// заполнить элементы второго массива.
	// каждый элемент 2 массива равен сумме предыдущих элементов 1 массива
	for(i = 1; i < SIZE; i++)
	{
		scanf("%lf", &nums[i]);
		sums[i] = nums[i] + sums[i-1];
	}
		
	// вывести значения массивов на печать в двух строках по столбцам
	for(i = 0; i < SIZE; i++)
		printf("%10.3f ", nums[i]);
	printf("\n");
	for(i = 0; i < SIZE; i++)
		printf("%10.3f ", sums[i]);

	return 0;
}