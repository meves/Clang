// t5.c - запрашивает возраст в годах выводит его в секундах
#include <stdio.h>
#define SEC 3.156e7
int main(void)
{
	int age; // возраст в годах

	printf("Введите свой возраст в годах: ");
	if (scanf("%d", &age) != 1);
	printf("Ваш возраст в секундах: %f\n", age * SEC);

	return 0;
}