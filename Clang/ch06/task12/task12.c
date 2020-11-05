// task12.c - создает и выводит первые восемь степеней числа 2
#include <stdio.h>
#include <math.h>
#define NUM 2
#define SIZE 8
int main(void)
{
	// создать восьмиэлементный массив типа int
	int numbers[SIZE];
	int index;
	
	// поместить в него первые восемь степеней числа 2
	for(index = 0; index < SIZE; index++)
		numbers[index] = pow(NUM, index);
	
	// вывести значения на печать
	index = 0;
	do
	{
		printf("numbers[%d] = %d\n", index, numbers[index]);
		
	} while(++index < SIZE);
	
	return 0;
}