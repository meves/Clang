// task9.c
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	int integer;
	int i, j;
	bool isSimple;
	
	// ввести целое число
	printf("Введите целое число, больше нуля (или 0 для выхода): ");
	while (scanf("%d", &integer))
	{
		if (integer < 0) {
			printf("Число дожно быть больше нуля!\n"
			" Введите целое число, больше нуля(или 0 для выхода): ");
			continue; 
		}
				
		switch (integer)
		{
			case 0:
				goto end;
			case 1:
				printf("Ряд простых чисел для %d: %d", integer, integer);
				goto next;
			case 2:
				printf("Ряд простых чисел для %d: %d", integer, integer);
				goto next;				
		}
		
		printf("Ряд простых чисел для %d: ", integer);
		// вывести все простые числа меньше или равные введенному
		for (i = 3; i <= integer; i++)
		{
			isSimple = true;
			for (j = 2; j < i; j++)
			{
				if ((i % j) == 0)
				{
					isSimple = false;
					break;
				}
			}
			if (isSimple)
				printf("%d ", i);
		}
		next: printf("\nВведите следующее целое число, больше нуля (или 0 для выхода): ");
	}
	end: printf("\nПрограмма завершена!\n");	
	
	return 0;
}


