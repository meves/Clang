// task14.c - �뢮��� ��ப� � ���⭮� ���浪�
#include <stdio.h>
#include <string.h>
#define SIZE 255
int main(void)
{
	char chars[SIZE];
	int i;
	
	printf("������ ��ப�:\n");
	i = 0;
	do{
		scanf("%c", &chars[i]);
	}while(chars[i++] != '\n');
		
	for(i = strlen(chars)-1; i >= 0; i--)
		printf("%c", chars[i]);
	
	return 0;
}