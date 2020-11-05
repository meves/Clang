// electric.c - ������뢠�� �㬬� ��� ��� �� �����ࣨ�
#include <stdio.h>
#define RATE1 0.12589
#define RATE2 0.17901
#define RATE3 0.20791
#define BREAK1 360.0
#define BREAK2 680.0
#define BASE1 (RATE1 * BREAK1)
#define BASE2 (BASE1 + RATE2 * (BREAK2 - BREAK1))
int main(void)
{
	double kwt;
	double bill;
	
	printf("������ ������⢮ ����室������� �����ࣨ� � ���/�.\n");
	scanf("%lf", &kwt);
	if (kwt <= BREAK1)
		bill = RATE1 * kwt;
	else if (kwt <= BREAK2)
		bill = BASE1 + (RATE2 * (kwt - BREAK1));
	else
		bill = BASE2 + (RATE3 * (kwt - BREAK2));
	printf("�㬬� � ����� �� %.1f ���/� ��⠢��� $%1.2f.\n", kwt, bill);
	
	return 0;
}