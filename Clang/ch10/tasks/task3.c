#include <stdio.h>
#define SIZE 10

int max(int *, int);

int main(void)
{
	int arr[10] = {54, 66, 12, 39, 60, 29, 78, 43, 99, 80};
	
	printf("Максимальное значение = %d\n", max(arr, SIZE));
	
	return 0;
}
/* синтаксис массивов
int max(int *int_arr, int n)
{
	int i;
	int max;
	
	max = int_arr[0];
	for (i = 1; i < n; i++)
	{
		if (int_arr[i] > max)
			max = int_arr[i];
	}
	
	return max;
}
*/
// синтаксис указателей
int max(int *int_arr, int n)
{
	int i;
	int max;
	
	max = *int_arr;
	for (i = 1; i < n; i++)
	{
		if (*(++int_arr) > max)
			max = *int_arr;
	}
	
	return max;
}