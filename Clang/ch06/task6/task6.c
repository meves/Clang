// task6.c - �뢮��� ᫮�� � ���⭮� ���浪�
#include <stdio.h>
#include <string.h>
int main(void)
{
	char word[30];
	int i;
	
	printf("������ ᫮��: ");
	scanf("%s", word);
	for(i = strlen(word)-1; i >= 0; i--)
		printf("%c", word[i]);
		
	return 0;
}