// task4.c
#include <stdio.h>
int main(void)
{
	char ch;
	int count = 0;

	printf("Введите последовательность символов или # для окончания: \n");
	while ((ch = getchar()) != '#')
	{
		if (ch == '.'){			
			++count;
			printf("!");
		}
		else if (ch == '!'){
			++count;
			printf("!!");
		}	
		else
			printf("%c", ch);
	}	
	printf("Было произведено %d замен.\n", count);	
	
	return 0;
}