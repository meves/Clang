// task5.c - 
#include <stdio.h>
int main(void)
{
	int guess = 50;
	int low, high;
	char response;
	
	low = 1;
	high = 100;
	printf ("�������� 楫�� �᫮ � �஬���⪥ �� 1 �� 100. � ���஡�� �⣠���� ���.\n"
			"������ ������� y, �᫨ ��� ������� ��ୠ;\n"
			"������ ������� m �᫨ ���������� �᫮ �����;\n"
			"������ ������� l �᫨ ���������� �᫮ �����.\n"
			"��訬 �᫮� ���� %d ?\n", guess);
	while ((response = getchar()) != 'y')
	{
		if (response == 'm')
		{
			low = guess + 1;
			guess = (low + high) / 2;		
			printf("��訬 �᫮� ���� %d ?\n", guess);
		}
		else if (response == 'l')
		{
			high = guess - 1; 
			guess = (low + high) / 2;
			printf("��訬 �᫮� ���� %d ?\n", guess);
		}	
		else
		{
			printf("� ᮦ������, � ������� ⮫쪮 y, m ��� l.\n");
			// printf("��訬 �᫮� ���� %d ?\n", guess);
		}	
		while (getchar() != '\n')
			continue;	
	}	
	printf("� ����, �� � ���� ��������!\n"
			"��� �᫮ %d\n", guess);
	
	return 0;
}