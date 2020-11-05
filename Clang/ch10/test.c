// test.c
#include <stdio.h>
#define SIZE 4
int main(void)
{
	int days[SIZE] = {1, 2, 3, 4};
	const int years[SIZE] = {0, 2, 4, 6};
	const int * pi;
	int * const pi1;
	const int * const pi2;
	int * npi;	
		
	pi = days;
	pi = years;
	pi = &days[2];
	npi = days;
	npi = years;
	
	return 0;
}