// task4.c - �⮡ࠦ��� ������ � ᠭ⨬����, ���� � ���
#include <stdio.h>
int main(void)
{
	double sm, ft, inch;
	const double FOOT = 30.48;
	const double INCH = 2.54;
	
	printf("������ ����� � ᠭ⨬���� <=0 ��� ��室�: ");
	scanf("%lf", &sm);
	while(sm > 0)
	{
		ft = sm / FOOT;
		inch = sm / INCH;
		printf("%.1f � = %.0f ��⮢ %.1f ���\n", sm, ft, inch);
		printf("������ ����� � ᠭ⨬���� <=0 ��� ��室�: ");
		scanf("%lf", &sm);	
	}
	printf("����� �����襭�.\n");
	
	return 0;
}