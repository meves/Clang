#include <stdio.h>
#include "string_in.h"
#define SZ1 21
#define SZ2 6
int main(void)
{
	char str1[SZ1];
	char str2[SZ2];
	const char * pch;
	
	puts("������ ����� ��ப� �� ����� 20  ᨬ������ ��� Enter ��� ��室�:");
	
	while (gets(str1) && str1[0] != '\0')
	{
		puts("������ ����� ��ப� �� ����� 5 ᨬ������:");
		gets(str2);
		pch = string_in(str1, str2);
		printf("��ப� 1: %s\n��ப� 2: %s\n��ப� 2 � ��ப� 1: %s\n���� ᨬ���� %p\n", str1, str2, pch, pch);
		puts("������ ����� ��ப� �� ����� 20  ᨬ������ ��� Enter ��� ��室�:");
	}
	puts("�ணࠬ�� �����襭�!\n�ᥣ� ��襣�.");
	
	return 0;
}