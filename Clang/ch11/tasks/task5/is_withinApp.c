#include <stdio.h>
#include <stdbool.h>
#include "is_within.h"
#define SZ 81
int main(void)
{
	char str[SZ];
	char ch;	
	char * ptr;
	
	puts("������ ��ப� �� ����� 80 ᨬ�����");
	fgets(str, SZ, stdin);
	
	// �����塞 ᨬ��� ����� ��ப� �� �㫥��� ᨬ���
	ptr = str;
	while (*ptr != '\n')
		ptr++;
	*ptr = '\0';
		
	puts(str);
	
	puts("������ ᨬ��� ��� ���᪠ � ��ப�"
	" ��� '#' ��� ��室�:");
	
	while ((ch = flet()) != '#')
	{
		if (is_within(str, ch))
			printf("������ %c ������\n", ch);
		else
			printf("������ %c �� ������\n", ch);
		puts("������ ᨬ��� ��� ���᪠ � ��ப�"
		" ��� '#' ��� ��室�:");
	}		
	puts("�ᥣ� ��饣�!");
	
	return 0;
}