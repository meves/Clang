// bottles.c 
#include <stdio.h>
#define MAX 100
int main(void)
{
	int count = MAX + 1;
	
	while(--count > 0)
	{
		printf("%d ���뫮� ����ࠫ쭮� ���� �� �����, "
		"%d ���뫮� ����ࠫ쭮� ����!\n", count, count);
		printf("���쬨� ���� �� ��� � ����� �� ����,\n");
		printf("%d ���뫮� ����ࠫ쭮� ����!\n\n", count-1);
	}
	
	return 0;
}