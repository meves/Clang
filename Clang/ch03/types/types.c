// types.c - печатает размеры типов компилятора gcc x86-64
#include <stdio.h>
int main(void)
{
	printf("short_integer: %zd, integer: %zd, long_integer: %zd, long_long_integer: %zd\n", 
			sizeof(short), sizeof(int), sizeof(long), sizeof(long long));

	printf("float = %zd, double =  %zdu, long double =  %zd.\n", 
			sizeof(float), sizeof(double), sizeof(long double));

	return 0;
}