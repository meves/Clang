// guess.c - ����䥪⨢��� � �訡�筮� �⣠�뢠��� �᫠
#include <stdio.h>
int main(void)
{
	int guess = 1;
	char response;
	
	printf ("�롥�� 楫�� �᫮ � �஬���⪥ �� 1 �� 100. � ���஡�� �⣠���� ");
	printf ("���.\n������ ������� y, �᫨ ��� ������� ��ୠ � ");
	printf ("\n ������� n � ��⨢��� ��砥.\n");
	printf ("��訬 �᫮� ���� %d?\n", guess);
	while ((response = getchar()) != 'y')
	{
		if (response == 'n')
			printf("��訬 �᫮� ���� %d?\n", ++guess);
		else
		{
			printf("� ᮦ������, � ������� ⮫쪮 y ��� n.\n");
			printf("��訬 �᫮� ���� %d?\n", guess);
		}	
		while (getchar() != '\n')
			continue;	
	}	
	printf("� ����, �� � ���� ��������!\n");
	
	return 0;
}