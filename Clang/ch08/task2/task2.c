// task2.c - читает входные данные как поток символов
#include <stdio.h>
int main(void)
{
	int ch;
	int counter = 0;
	
	while ((ch = getchar()) != EOF)
	{
		if (ch == '\n')
		{
			printf("%c", ch);
			counter = 0;
		}
		else{
			printf("%c %d\t", ch, ch);
			if (++counter % 5 == 0)
				printf("\n");
		}
	}
	
	return 0;
}