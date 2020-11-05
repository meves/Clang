// print1.c - демонстрирует некоторые свойства функции printf
#include <stdio.h>
int main(void)
{
	int ten = 10;
	int two = 2;

	printf("Выполняется правильно: ");
	printf("%d минус %d равно %d\n", ten, two, ten - two);
	printf("Выполняется неправильно: ");
	printf("%d минус %d равно %d\n", ten);

	return 0;
}