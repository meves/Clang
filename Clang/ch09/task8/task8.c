// power.c - ���������� �ᥫ � 楫�� �⥯���
#include <stdio.h>
double power(double n, int p);

int main(void)
{
	double x, xpow;
	int exp;
	
	printf("������ �᫮ � 楫�� �⥯���,"
	" � ������\n�᫮ �㤥� ���������. ��� �����襭�� "
	"�ணࠬ�� ������ q.\n");
	while(scanf("%lf%d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%.3g � �⥯��� %d ࠢ�� %.5g\n", x, exp, xpow);
		printf("������ ᫥������ ���� �ᥫ ��� q ��� �����襭��.\n");
	}
	printf("��������, ��� 㤮���⢮ਫ� ����⢮ �ணࠬ�� - �� ᢨ�����!\n");
	
	return 0;
}

double power(double n, int p)
{	
	if(n == 0)
		return 0;
	else if(p == 0)
		return 1;
	
	if(p < 0)
	{
		p = -p;
		n = 1 / n;
	}	
	
	if(p == 1)
		return n;
	
	return n * power(n, p-1);	
}