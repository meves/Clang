// quest9.c -- ���᫥��� ����� ��ப�
#include <stdio.h>
#include <string.h>
#include "stringlength.h"
#define SIZE 81
int main(void)
{
	char string[SIZE];
	int len;
	
	puts("������ ��ப� �� ����� 80 ᨬ����� ��� Enter ��� ��室�:");
	gets(string);
	while (*string)
	{
		len = stringlength(string);
		printf("����� ��ப� %d ᨬ�����\n", len);
		puts("������ ᫥������ ��ப� �� ����� 80 ᨬ����� ��� Enter ��� ��室�:");
		gets(string);
	}
	
	return 0;
}