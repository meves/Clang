// print2.c - печатает все целочисленные типы
#include <stdio.h>
int main(void)
{
	int _int = -32;
	unsigned int _uint = 32;
	short int _hint = -16;
	unsigned short int _uhint = 16;
	long int _lint = -64;
	unsigned long int _ulint = 64;
	long long int _llint = -128;
	unsigned long long int _ullint = 128;

	printf("_int = %d, _uint = %u\n _hint = %hd, _uhint = %hu\n _lint = %ld, _ulint = %lu\n _llint = %lld, _ullint = %llu\n",
			 _int, _uint, _hint, _uhint, _lint, _ulint, _llint, _ullint);

	return 0;
}