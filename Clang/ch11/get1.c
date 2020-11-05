// get1.c -- простая самописная функция ввода,
//которая подсчитывает количество введенных символов
#include <stdio.h>
#define SIZE 26

int get1(char string[], int);

int main(void)
{
	char str[SIZE];
	int c;
	
	printf("Введите строку не более 25 символов:\n");
	c = get1(str, SIZE);
	printf("Строка: '%s' имеет длину %d символов.\n", str, c);
	
	return 0;
}

int get1(char string[], int len)
{
	int count;
	int ch;
	
	for (count = 0; count < len-1 && ((ch = getchar()) != '\n'); count++)
	{
		string[count] = ch;
	}
	string[count] = '\0';	
	
	return count;	
}
