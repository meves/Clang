#include <stdio.h>
#include "reverse.h"
#define SZ 21
int main(void)
{
	char str[SZ];
	char * ps;
	
	puts("������ ��ப� �� ����� 20 ᨬ����� ��� Enter ��� ��室�:");
	
	while ( gets(str) && str[0] != '\0' )
	{
		printf("��� ��ப�, ������ �� �����: %s\n", str);
		ps = reverse(str);
		printf("��� ॢ���஢����� ��ப�: %s\n", ps);
		puts("������ ��ப� �� ����� 20 ᨬ����� ��� Enter ��� ��室�:");
	}
	puts("�ணࠬ�� �����襭�.\n�ᥣ� ��襣�!");
	
	return 0;
}