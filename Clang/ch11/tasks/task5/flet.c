// flet.c -- ����砥� ���� ᨬ��� � ���ன�⢠ 
// 			 �����
#include <stdio.h>
char flet(void)
{
	char ch, temp;
	// ����砥� ���� ᨬ���
	ch = getchar();
	// ��頥� �⠭����� ����
	while ((temp = getchar()) != '\n');
	
	return ch;
}