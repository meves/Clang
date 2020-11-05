// task2.c - напечатать знаки $ елочкой
#include <stdio.h>
#define ROW 5

int main(void)
{
	char ch = '$';
	int i, j;
	
	for(i = 1; i <= ROW; i++)
	{
		for(j = 1; j <= i; j++)
			printf("%c", ch);
		printf("\n");
	}
	
	return 0;
}