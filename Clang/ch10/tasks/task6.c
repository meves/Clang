#include <stdio.h>
#define ROWS 5
#define COLS 5

void copy_arr(double [][COLS], double [][COLS], int);

int main(void)
{
	double source[ROWS][COLS] = {{1.1,2.2,3.3,4.4,5.5}, {1.1,2.2,3.3,4.4,5.5}, {1.1,2.2,3.3,4.4,5.5},
								{1.1,2.2,3.3,4.4,5.5}, {1.1,2.2,3.3,4.4,5.5}};
	double target[ROWS][COLS];
	int row, col;

	copy_arr(source, target, ROWS);
	printf("source:\n");
	for (row = 0; row < ROWS; row++)
	{
		printf("row %d  ", row);
		for(col = 0; col < COLS; col++)
		{
			printf("[%d] = %.2f ", 
					col, source[row][col]);	
		}
		printf("\n");
	}
	printf("\ntarget:\n");
	for (row = 0; row < ROWS; row++)
	{
		printf("row %d  ", row);
		for(col = 0; col < COLS; col++)
		{
			printf("[%d] = %.2f ", 
					col, target[row][col]);	
		}
		printf("\n");
	}	
	
	return 0;
}

void copy_arr(double s[][COLS], double t[][COLS], int rows)
{
	int r, c;
	
	for (r = 0; r < rows; r++)
		for (c = 0; c < COLS; c++)
			t[r][c] = s[r][c];
}