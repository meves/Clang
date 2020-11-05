#include <stdio.h>
void print(char ch, int lines, int cols)
{
	int i, j;
	
	for(i = 0; i < lines; i++)
	{
		for(j = 0; j < cols; j++)
		{	
			printf("%c", ch);
		}
		printf("\n");
	}
}