#include <stdio.h>
#define SIZE 10

int max(int *, int);

int main(void)
{
	int arr[10] = {54, 66, 12, 39, 60, 29, 78, 43, 99, 80};
	
	printf("���ᨬ��쭮� ���祭�� = %d\n", max(arr, SIZE));
	
	return 0;
}
/* ᨭ⠪�� ���ᨢ��
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
// ᨭ⠪�� 㪠��⥫��
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