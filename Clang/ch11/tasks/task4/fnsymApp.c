#include <stdio.h>
#include "fnsym.h"
#define SZ 81
int main(void)
{
	char string[SZ];
	char ch;
	char * ptr;
		
	puts("������ ��ப� �� ����� 80 ᨬ�����:");
	fgets(string, SZ, stdin);
	// 横� ���᪠ ᨬ����
	puts("������ ᨬ��� ��� ���᪠ � ��ப� ��� '#' ��� ��室�:");
	while ((ch = readFirstSymbol()) != '#')
	{
		ptr = fndsmbl(string, ch);
		if (ptr != NULL)
			printf("������: %c, ������: %d\n", *ptr, ptr - string);
		else
			puts("������ ᨬ���� ���! ���஡�� �� ࠧ.");	
		puts("������ ᨬ��� ��� ���᪠ � ��ப� ��� '#' ��� ��室�:");
	}
	puts("�ᥣ� ��襣�!");
	
	return 0;
}