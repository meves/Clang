// sample.c - демонстрирует использование оператора sizeof
// и функции strlen()
#include <stdio.h>
#include <string.h>
int main(void)
{
	int numbers[10];
	char string[11] = "my name ad";
	unsigned long sn;
	size_t ss;
	int i;

	sn = sizeof(numbers) / sizeof(int);
	
	for (i = 0; i < sn; i++)
		numbers[i] = i;

	for (i = 0; i < sn; i++)
		printf("numbers[%d] = %d ", i, numbers[i]);	
	printf("\n");

	ss = strlen(string);

	for (i = 0; i < ss; i++)
		printf("%c", string[i]);
	printf("\n");

	return 0;
}