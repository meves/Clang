// task10.c - прочитать 8 целых чисел в массив
// 			  и вывести в обратном порядке
#include <stdio.h>
#define SIZE 8
int main(void)
{
	int nums[SIZE];
	int i;
	
	printf("Введите восемь целых чисел: ");
	for(i = 0; i < SIZE; i++)
		scanf("%d", &nums[i]);

	for(i = SIZE-1; i >= 0; i--)	
		printf("nums[%d] = %d\n", i, nums[i]);	
	
	return 0;
}