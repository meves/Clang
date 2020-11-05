#include <stdio.h>
#define SIZE1 7
#define SIZE2 3

void copy_ptr(double *s, double *t, int n);

int main(void)
{
	double source[SIZE1] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
	double target[SIZE2];
	int i;
	
	copy_ptr(source+2, target, SIZE2);
	
	for (i = 0; i < SIZE2; i++)
	{
		printf("%.1f ", target[i]);
	}
	
	return 0;
}

void copy_ptr(double *s, double *t, int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		*t++ = *s++;
	}
}