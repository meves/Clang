// task1.c - массив из 26 букв
#include <stdio.h>
#define SIZE 26
int main(void)
{
	// создать массив из 26 элементов char
	char letters[SIZE];
	char ch;
	int index;
	
	// поместить 26 букв нижнего регистра
	for(ch = 'a', index = 0; index < SIZE; ch++, index++)
		letters[index] = ch;
	
	// вывести содержимое массива
	for(index = 0; index < SIZE; index++)
		printf("%c ", letters[index]);
	
	return 0;
}