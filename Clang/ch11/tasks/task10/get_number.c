#include <stdio.h>
unsigned int get_uint(void);

unsigned int get_number(void)
{
	unsigned int number;
	
	// ������� ���� �᫠
	puts("Enter number from 1 to 5");
	
	// ������� ���� �᫠	 
	number = get_uint();
	// �஢���� �᫮ �� �宦����� � �������� �� 1 �� 5
	// �᫨ �᫮ �室�� � ��������, ������ ��� � ��뢠���� �㭪��
	while (number < 1 || number > 5)
	{
		// �᫨ �᫮ �� �室�� � ��������, ������� ���� ᭮��
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