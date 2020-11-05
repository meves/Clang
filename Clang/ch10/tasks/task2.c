#include <stdio.h>
#define SIZE 9

void copy_arr(double s[], double t[], int n);
void copy_ptr(double *s, double *t, int n);

int main(void)
{
	double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
	double target1[SIZE], target2[SIZE];
	int i;
	
	copy_arr(source, target1, SIZE);
	copy_ptr(source, target2, SIZE);
	
	printf("  s     t1    t2\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%5.1f %5.1f %5.1f\n", source[i], target1[i], target2[i]);
	}
	
	return 0;
}

void copy_arr(double s[], double t[], int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		t[i] = s[i];
	}
}

void copy_ptr(double *s, double *t, int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		*t++ = *s++;
	}
}