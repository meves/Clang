// task3.c - вывести буквы елочкой в обратном порядке
#include <stdio.h>
#define ROW 6

int main(void)
{
	char ch;
	int i, j;
	
	for(i = 1; i <= ROW; i++)
	{
		for(j = 1, ch = 'F'; j <= i; j++, ch--)
			printf("%c ", ch);
		printf("\n");
	}
	
	return 0;
}