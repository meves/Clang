// compare.c -- ��� ��������� ����� ��������
#include <stdio.h>
#include <string.h>
#define ANSWER "�����"
#define MAX 40

int main(void)
{
	char try[MAX];
	
	puts("��� ��������� � ������ ������?");
	gets(try);
	while(strcmp(try, ANSWER))
	{
		puts("���, �����������. ����������� ��� ���.");
		gets(try);
	}
	puts("������ ���������!");
	
	return 0;
}