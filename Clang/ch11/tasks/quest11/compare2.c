// compare2.c
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ANSWER "Grant"
#define MAX 40

char * prepareString(char * str);

int main(void)
{
	char try[MAX];
	
	puts("�� ���஭�� � ������ �࠭�?");
	gets(try);
	
	prepareString(try);	
	
	while(strcmp(try, ANSWER))
	{
		puts("���, ���ࠢ��쭮. ����⠩��� �� ࠧ.");
		gets(try);
	}
	puts("������ �ࠢ��쭮!");
	
	return 0;
}

char * prepareString(char * str)
{
	char * pchar;
	
	pchar = str;
	// ���� ᨬ��� �८�ࠧ���� � ���孨� ॣ����
	// 	��⠫�� � ������
	if (*pchar != '\0')
	{	
		toupper(*pchar++);
		while (*pchar)
			tolower(*pchar++);
	}
	return str;
}