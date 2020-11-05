// task1.c - подсчитывает количество вводимых символов до конца файла
#include <stdio.h>
int main(void)
{
	int counter;
	
	while (getchar() != EOF)
		counter++;
	
	printf("Введено (в файле) %d символов\n", counter);
	
	return 0;
}