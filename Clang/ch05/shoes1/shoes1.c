// shoes1.c - �८�ࠧ�� ࠧ��� ��㢨 � ��
#include <stdio.h>
#define ADJUST 7.64
#define SCALE 0.325
int main(void)
{
	double shoe, foot;
	
	shoe = 9.0;
	foot = SCALE * shoe + ADJUST;
	printf("������ ��㢨 (��᪮�)	����� ��㯭�\n");
	printf("%10.1f %20.2f", shoe, foot);
	
	return 0;
}