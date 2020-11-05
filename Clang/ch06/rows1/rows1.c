// rows1.c - использование вложенных циклов
#include <stdio.h>
#define ROWS 6
#define CHARS 10
int main(void)
{
	int row;
	char ch;
	
	for(row=0; row<ROWS; row++)
	{
		printf("line %d: ", row);
		for(ch='A'; ch<('A'+CHARS); ch++)
			printf("%c", ch);
		printf("\n");
	}
	
	return 0;
}