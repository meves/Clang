// task2.c - выводит 10 чисел начиная с введенного
#include <stdio.h>
int main(void)
{
	int num, num10;
	
	printf("Введите любое целое число: ");
	scanf("%d", &num);
	num10 = num + 10;
	while(num <= num10)
	{
		printf("%d\t", num);
		++num;
	}
	
	return 0;
}