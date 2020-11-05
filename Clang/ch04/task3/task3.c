// task3.c - ввод числа с плавающей запятой и вывод
// в десятичном и экспоненциальном формате
#include <stdio.h>
int main(void)
{
	float f;
	// read a number
	printf("Enter a number: ");
	scanf("%g", &f);
	// print a number in different formats
	printf("%.1f %.1e\n", f, f);
	printf("%+.3f %.3E\n", f, f);

	return 0;
}