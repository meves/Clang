// rdfw.c -- �⠥� ��ࢮ� ᫮�� ��ப�
#include <stdio.h>

void readFirstWord(char * buf)
{
	char ch;
	
	// �⥭�� ��ࢮ�� ᫮��
	ch = getchar();
	while (ch != '\t' && ch != ' ' && ch != '\n')
	{
		*buf++ = ch;
		ch = getchar();
	}
}