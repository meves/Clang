// scan_str.c -- �ᯮ�짮����� �㭪樨 scanf()
#include <stdio.h>

int main(void)
{
	char name1[11], name2[11];
	int count;
	
	printf("������, �������� ��� �����.\n");
	count = scanf("%5s %10s", name1, name2);
	printf("���⠭� %d �����: %s � %s\n", count, name1, name2);
	
	return 0;
}