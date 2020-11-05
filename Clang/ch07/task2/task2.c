// task2.c
#include <stdio.h>
int main(void)
{
	char ch;
	int count = 0;
	
	while ((ch = getchar()) != '#')
	{
		if (ch != '\n')
		{
			printf("%c - %d\t", ch, ch);
			if ((++count % 8) == 0)
				printf("\n");
		}
	}
	
	return 0;
}