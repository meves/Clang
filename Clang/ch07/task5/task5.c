// task5.c
#include <stdio.h>
int main(void)
{
	char ch;
	int count = 0;
	
	printf("Введите последовательность символов или # для окончания: \n");
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
			case '.':
				++count;
				printf("!");
				break;
			case '!':
				++count;
				printf("!!");
				break;
			default:
				printf("%c", ch);
		}
	}
	printf("Было произведено %d замен.\n", count);
	
	return 0;
}