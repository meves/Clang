// chcount.c - �ᯮ�짮����� �����᪮�� ������ AND
#include <stdio.h>
#include <iso646.h>
#define PERIOD '.'
int main(void)
{
	int ch;
	int charcount = 0;
	
	while((ch = getchar()) != PERIOD)
	{
		if(ch != '"' and ch != '\'')
			charcount++;
	}
	printf("� ������ �।������� ᮤ�ঠ��� %d ᨬ�����, �⫨��� �� ����祪.\n", charcount);
		
	return 0;
}