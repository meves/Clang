// task7.c - ࠡ�⠥� � ����⢥��묨 �᫠��
#include <stdio.h>
double func (double, double);
int main(void)
{
	double num1, num2;
	
	printf("������ ��� �᫠ � ������饩 ����⮩ "
			"��� �� ᨬ��� ��� ��室�: ");
	while(scanf("%lf %lf", &num1, &num2) == 2)	
	{
		printf("(num1 - num2) / (num1 * num2) = %g\n");
		printf("������ ��� �᫠ � ������饩 ����⮩"
			"��� �� ᨬ��� ��� ��室�: ");
	}		
	
	return 0;
}

double func(double num1, double num2)
{
	return (num1 - num2) / (num1 * num2);
}