#include <stdio.h>
#include <string.h>
#include "space.h"
#define SIZE 81
int main(void)
{
	char buf[SIZE];
	const char * ptr;
	
	puts("������ ��ப� �� ����� 80 ᨬ����� ��� Enter ��� ��室�:");
	gets(buf);
	while (*buf)
	{
		ptr = space(buf);
		if (*ptr == ' ')
		{
			puts(ptr);
			printf("������ '�஡��', ��室���� �� ����� %p\n", ptr);
		}
		else if (*ptr == '\0')
		{
			puts(ptr);
			printf("������ '����� ��ப�', ��室���� �� ����� %p\n", ptr);
		}
		else
			printf("��-� ��諮 �� ⠪!\n");
		puts("������ ᫥������ ��ப� �� ����� 80 ᨬ����� ��� Enter ��� ��室�:");
		gets(buf);
	}
	puts("�ᥣ� ��襣�!");
	
	return 0;
}