// change.c -- ����砥� ��ப� � �ணࠬ�� � ���⮩ �� ��९�������
#include <stdio.h>
#include <string.h>
#define SIZE 80

int main(void)
{
	char line[SIZE];
	char * find;
	
	puts("������ ��ப�:");
	fgets(line, SIZE, stdin);
	find = strchr(line, '\n');
	if (find)
		*find = '\0';
	puts(line);
	
	return 0;
}