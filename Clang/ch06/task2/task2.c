// task2.c - �������� ����� $ ���窮�
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