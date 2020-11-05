// task8.c - �।�⠢����� ⥬������� �� 誠�� ������, ���좨�� � ��७����
#include <stdio.h>
#include <float.h>
void temperatures(double frnGt);
int main(void)
{
	double farengate;
	
	// ����� ���祭�� ⥬������� �� ��७�����
	printf("������ ���祭�� ⥬������� �� ��७����� (q ��� �� ᨬ��� ��� ��室�): ");
	while(scanf("%lf", &farengate) == 1){
		temperatures(farengate);
		printf("������ ���祭�� ⥬������� �� ��७����� (q ��� �� ᨬ��� ��� ��室�): ");
	}
	printf("����� �����襭�.\n");
	
	return 0;
}

void temperatures(double frnGt)
{
	const double K1CELSIUM = 1.8;
	const double K2CELSIUM = 32.0;
	const double K_KELVIN = 273.16;
	double clsm, klvn;
	
	clsm = K1CELSIUM * frnGt + K2CELSIUM;
	klvn = clsm + K_KELVIN;
	
	printf("��������� � �ࠤ��� �� 誠�� ������	��७���� ���좨��\n");
	printf("\t\t\t\t%7.2f %10.2f %8.2f\n", clsm, frnGt, klvn);								
}