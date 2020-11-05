#include <stdio.h>
#define ROWS 3
#define COLS 5

void mulx2(int [][COLS], int);
void print_arr(int [][COLS], int);

int main(void)
{
	int arr[ROWS][COLS] = {{1,2,3,4,5}, {2,3,4,5,6}, {3,4,5,6,7}};
	
	print_arr(arr, ROWS);
	mulx2(arr, ROWS);
	print_arr(arr, ROWS);
		
	return 0;
}

void mulx2(int ar[][COLS], int rows)
{
	int i, j;
	
	for (i = 0; i < rows; i++)
		for (j = 0; j < COLS; j++)
			ar[i][j] *= 2;
}

void print_arr(int ar[][COLS], int rows)
{
	int i, j;
	
	for (i = 0; i < rows; i++)
	{	
		for (j = 0; j < COLS; j++)
			printf("[%d][%d] = %d", i, j, ar[i][j]);
		printf("\n");
	}	
	printf("\n");
}