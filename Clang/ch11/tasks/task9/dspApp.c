#include <stdio.h>
#include "dsp.h"
#define SZ 81
int main(void)
{
	char str[SZ];
	char * sws;
	
	puts("������ ��ப� ������ �� 80-� ᨬ����� ��� 'Enter' ��� �����襭��:");
	
	while (gets(str) && str[0] != '\0')
	{
		printf("��� ��� ��ப�: %s\n", str);
		sws = deleteSpaces(str);
		printf("��� ��� ��ப� ��� �஡����: %s\n", sws);
		puts("������ ��ப� ������ �� 80-� ᨬ����� ��� 'Enter' ��� �����襭��:");
	}
	puts("�ᥣ� ��襣�!");
	
	return 0;
}