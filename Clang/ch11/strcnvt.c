// strcnvt.c -- �ᯮ�짮����� �㭪樨 strtol()
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char number[30];
	char * end;
	long value;
	
	puts("������ �᫮ (��� ������ ��ப� ��� ��室� �� �ணࠬ��):");
	while (gets(number) && number[0] != '\0')
	{
		value = strtol(number, &end, 10);
		printf("���祭��: %ld, ��⠭�� �� %s (%d)\n", value, end, *end);
		value = strtol(number, &end, 16);
		printf("���祭��: %ld, ��⠭�� �� %s (%d)\n", value, end, *end);
		puts("������饥 �᫮:");
	}
	puts("�ᥣ� ��襣�!");
	
	return 0;
}