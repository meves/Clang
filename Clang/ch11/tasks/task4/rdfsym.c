// rdfsym.c -- �⠥� � �����頥� ���� ᨬ��� �����
#include <stdio.h>
char readFirstSymbol(void)
{
	char ch, temp;
	// ����砥� ���� ᨬ���
	ch = getchar();
	// ��頥� �⠭����� ����
	while ((temp = getchar()) != '\n');
	
	return ch;
}