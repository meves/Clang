// task6.c
#include <stdio.h>
int main(void)
{
	char cur, prev;
	int count = 0;
	
	printf("Введите последовательность символов или # для завершения:\n");
	while ((cur = getchar()) != '#')
	{
		if (prev == 'e' && cur == 'i')
			++count;
		prev = cur;
	}
	printf("Последовательсоть символов 'ei' встретилась %d раз.\n", count);
	
	return 0;
}