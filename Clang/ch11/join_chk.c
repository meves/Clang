// join_chk.c -- ���������� ��� ������, ������� �������� ������
#include <stdio.h>
#include <string.h>
#define SIZE 40
#define BUGSIZE 11

int main(void)
{
	char flower[SIZE];
	char addon[] = " ������, ��� ������ �������?";
	char bug[BUGSIZE];
	int available;
	
	puts("����� ��� ������� ������?");
	gets(flower);
	//
	if ((strlen(flower) + strlen(addon) + 1) <= SIZE)
		strcat(flower, addon);
	puts(flower);
	
	puts("����� ���� ������� ���������?");
	gets(bug);
	//
	available = BUGSIZE - strlen(bug) - 1;
	strncat(bug, addon, available);
	puts(bug);
	
	return 0;
}
