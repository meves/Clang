#include <stdio.h>
#define SIZE 10

double diff(double *, int);

int main(void)
{
	double arr[SIZE] = {48.2, 98.4, 65.66, 13.22, 45.6, 69.0, 177.1, 19.8, 25.89, 77.7};
	
	printf("Разница между максимальным и минимальным значением"
	" массива равна %.2f\n", diff(arr, SIZE));
	
	return 0;
}

double diff(double d_arr[], int n)
{
	double max, min;
	int i;
	
	max = min = d_arr[0];	
	for (i = 1; i < n; i++)
	{
		if (d_arr[i] > max)
			max = d_arr[i];
		else if (d_arr[i] < min)
			min = d_arr[i];
	}
	
	return (max - min);
}
