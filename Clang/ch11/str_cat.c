// str_cat.c -- ���������� ��� ������
#include <stdio.h>
#include <string.h>
#define SIZE 80

int main(void)
{
	char flower[SIZE];
	char addon[] = " ������ ��� ������ �������.";
	char * pch;
	
	puts("����� ��� ������� ������?");
	gets(flower);
	pch = strcat(flower, addon);
	puts(flower);
	puts(addon);
	putchar(*pch);	
	
	return 0;
}