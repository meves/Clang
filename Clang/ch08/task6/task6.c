// task6.c - �孮����� ����
#include <stdio.h>
#include <ctype.h>
int get_alpha(void);
int main(void)
{
	char alpha;
	
	alpha = get_alpha();
	printf("��ࢠ� �㪢�: %c.\n", alpha);
	return 0;
}

int get_alpha(void)
{
	int ch;
	
	while (ch = getchar())
	{
		if (isgraph(ch)) break;		
	}
	
	return ch;
}


