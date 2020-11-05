#include <stdio.h>

void copy_arr(int r, int c, double [r][c], double [r][c]);
void show_arr(int r, int c, double [r][c]);

int main(void)
{
	int rs = 4;
	int cs = 7;
	double source[rs][cs]; 
	double target[rs][cs];
	int i, j;
	
	for (i = 0; i < rs; i++)
		for (j = 0; j < cs; j++)
			source[i][j] = i+j+1;
	
	copy_arr(rs, cs, source, target);
	show_arr(rs, cs, source);
	show_arr(rs, cs, target);
	
	return 0;
}

void copy_arr(int r, int c, double s[r][c], double t[r][c])
{
	int i, j;
	
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			t[i][j] = s[i][j];
}

void show_arr(int r, int c, double ar[r][c])
{
	int i, j;
	
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
			printf("[%d][%d] = %.1f ", i, j, ar[i][j]);
		printf("\n");
	}	
	printf("\n");
}