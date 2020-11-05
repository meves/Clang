// shoes2.c - ������ ����� �⮯� ��� ��᪮�쪨� ࠧ��஢ ��㢨 
#include <stdio.h>
#define ADJUST 7.64
#define SCALE 0.325
int main(void)
{
	double shoe, foot;
	
	printf("������ ��㢨 (��᪮�)	����� ��㯭�\n");
	shoe = 3.0;
	while(shoe < 18.5)
	{
		foot = SCALE * shoe + ADJUST;
		printf("%10.1f %20.2f ���\n", shoe, foot);
		shoe = shoe + 1.0;
	}
	
	printf("�᫨ ���� ���室��, ���� ��.\n");
	
	return 0;
}