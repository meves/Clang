// task15.c - ���⮩ � ᫮��� ��業��
#include <stdio.h>
#define DEPOSIT 100.0
#define RATE_1 0.1
#define RATE_2 0.05
int main(void)
{
	double sum1, sum2;	
	int years;
	
	years = 0;
	sum1 = 0.0;
	sum2 = DEPOSIT;
	// ���᫨�� ������⢮ ���, ����� �㬬� ᫮����� ��業� 
	// �ॢ������ �㬬� ���⮣� ��業�
	do{
		// ����� 100 �����஢ ��� ���⮩ ��業� �� �⠢�� 10%
		sum1 += DEPOSIT * (1 + RATE_1);		
		// ����� 100 �����஢ ��� ᫮��� ��業� �� �⠢�� 5%
		sum2 *= (1 + RATE_2);
		years++;
	}while(sum1 > sum2);
		
	// �뢥�� �㬬� ��� � ࠧ���� ����� �������
	printf("��१ %d ��� �㬬� �� ������ ���� �㤥� ࠢ�� $%.2f"
			", � �㬬� �� ������ ������ $%.2f\n", years, sum1, sum2);
	
	return 0;
}