#include <stdio.h>
unsigned int get_uint(void);

unsigned int get_number(void)
{
	unsigned int number;
	
	// запросить ввод числа
	puts("Enter number from 1 to 5");
	
	// получить ввод числа	 
	number = get_uint();
	// проверить число на вхождение в диапазон от 1 до 5
	// если число входит в диапазон, вернуть его в вызывающую функцию
	while (number < 1 || number > 5)
	{
		// если число не входит в диапазон, запросить ввод снова
		puts("Enter number from 1 to 5");
		number = get_uint();
	}
	
	return number;
}

/*
int main(void)
{
	unsigned int input;

	while (input = get_number())
		printf("%u\n", input);	
}
*/