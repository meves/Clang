// task16.c - �ᯮ�짮����� ����� �����
#include <stdio.h>
#define BONUS 1000000.0
#define RATE 0.08
#define WITHDRAW 100000.0
int main(void)
{
	double sum;
	int years;
	
	years = 0;
	// �������� �� ��� ������� �� �⠢�� 8%
	sum = BONUS;
	do{
		sum *= (1 + RATE);
		// � ��᫥���� ���� ���� ���� 100 ��� �����஢
		sum -= WITHDRAW;
		years++;
		
	} while(sum > 0);
	
	printf("��१ %d ��� �� ��� �� ��⠭���� �����!\n", years);
	
	return 0;
}