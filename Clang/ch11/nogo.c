// nogo.c -- ����� �� ��� ��������?
#include <stdio.h>
#define ANSWER "�����"

int main(void)
{
	char try[40];
	
	puts("��� ��������� � ������ ������?");
	gets(try);
	while(try != ANSWER) // ��������� �� ������ ������ �� ����� ���� �������
	{
		puts("���, �����������. ����������� ��� ���.");
		gets(try);
	}
	puts("������ ���������!");
	
	return 0;
}