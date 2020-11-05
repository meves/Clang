#include <stdio.h>
#define COLS 81
void print_source_list(char arr[][COLS], int fact_rows)
{
	unsigned r, c;					// индексы рядов и столбцов
	
	for (r = 0; r < fact_rows; r++)
	{
		for (c = 0; arr[r][c] != '\0'; c++)
		{
			putchar(arr[r][c]);
		}
		putchar('\n');
	}
}