// name2.c -- �ணࠬ�� ���뢠�� ���
#include <stdio.h>
#define MAX 81

int main(void)
{
	
	char name[MAX];
	char * ptr;	
	
	ptr = name;
	printf("��� ��� �����?\n");
	while( gets(name) != NULL){
		printf("%s? �! %s!\n", name, ptr);
	}
	
	return 0;
}