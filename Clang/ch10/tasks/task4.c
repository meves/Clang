#include <stdio.h>
#define SIZE 10

int max_index(double [], int);

int main(void)
{
	double arr[SIZE] = {48.2, 98.4, 65.66, 13.22, 45.6, 69.0, 177.1, 19.8, 25.89, 77.7};
	
	printf("Индекс максимального значения равен %d\n", max_index(arr, SIZE));
	
	return 0;
}

int max_index(double d_arr[], int n)
{
	double max;
	int index, i;
	
	max = d_arr[0];
	index = 0;
	
	for (i = 1; i < n; i++)
	{
		if (d_arr[i] > max)
		{
			max = d_arr[i];
			index = i;
		}
	}
	
	return index;
}