// task4.c - печатает вещественное число в десятичном и экспоненциальном выражении
#include <stdio.h>
int main(void)
{
	float f;
	
	printf("Enter real number: ");
	scanf("%f", &f);
	printf("Entered real number %f or %e", f, f);
	
	return 0;
}
