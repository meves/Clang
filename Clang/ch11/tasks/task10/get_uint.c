#include <stdio.h>

unsigned int get_uint(void)
{
	unsigned int number; 
	int rez;
	puts("Before while get_uint");
	
	while ((rez = scanf("%u", &number)) != 1)
	{
		// �᫨ ������� �� 楫�� �᫮, ������ ���� � ������� ����
		while (getchar() != '\n');
		puts("You entered an invalid value. Enter an integer:");				
	}
	while (getchar() != '\n');
	return number;		
}
/*
int main(void)
{
	unsigned int input;

	while (input = get_uint())
		printf("%u\n", input);	
}
*/