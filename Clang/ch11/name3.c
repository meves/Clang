// name3.c -- �ணࠬ�� ���뢠�� �����, �������� �㭪樥� fgets()
#include <stdio.h>
#define MAX 8

int main(void)
{
	char name[MAX];
	char * ptr;
	
	printf("��� ��� �����?\n");
	ptr = fgets(name, MAX, stdin);
	printf("%s? A! %s!\n", name, ptr);
	
	return 0;
}