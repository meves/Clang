// task8.c
#include <stdio.h>
#define RATE_HOUR1 8.75
#define RATE_HOUR2 9.33
#define RATE_HOUR3 10.00
#define RATE_HOUR4 11.20
#define OVER_RATE 15.00
#define TIME 40
#define TAX_RATE1 0.15
#define TAX_RATE2 0.2
#define TAX_RATE3 0.05
#define BASE_TAX1 300.00
#define BASE_TAX2 450.00
#define SUM1 BASE_TAX1 * TAX_RATE1
#define SUM2 SUM1 + (BASE_TAX2 - BASE_TAX1) * TAX_RATE2
int main(void)
{
	int hours;
	double salary, taxes;
	int choice;
	double rate_hour;
	
	// ������� ���� �⠢�� ��ࠡ�⭮� �����
	printf("������ �᫮, ᮮ⢥�����饥 �।���⠥��� �⠢�� ��ࠡ�⭮� ����� ��� ����⢨�:\n");
	printf("1) $%.2f/��\t\t2) $%.2f/��\n", RATE_HOUR1, RATE_HOUR2);
	printf("3) $%.2f/��\t\t4) $%.2f/��\n", RATE_HOUR3, RATE_HOUR4);
	printf("5) ��室: ");
	while (scanf("%d", &choice) == 1)
	{
		switch (choice)
		{
			case 1:
				rate_hour = RATE_HOUR1;
				break;
			case 2:
				rate_hour = RATE_HOUR2;
				break;
			case 3: 
				rate_hour = RATE_HOUR3;
				break;
			case 4:
				rate_hour = RATE_HOUR4;
				break;
			case 5:
				goto exit;
			default:
				printf("������ �᫮ �� 1 �� 5: \n");
				printf("1) $%.2f/��\t\t2) $%.2f/��\n", RATE_HOUR1, RATE_HOUR2);
				printf("3) $%.2f/��\t\t4) $%.2f/��\n", RATE_HOUR3, RATE_HOUR4);
				printf("5) ��室\n");
				continue;
		}
			
		// ������� ���-�� �ᮢ ��ࠡ�⠭��� �� ������
		printf("������ ������⢮ �ᮢ ��ࠡ�⠭��� �� ������ ��� �㪢� ��� ��室�: ");
		
		if (scanf("%d", &hours) == 0)
			break;
		// ������� ��௫���
		if (hours <= TIME)
			salary = hours * rate_hour;
		else 
			salary = TIME * rate_hour + (hours - TIME) * OVER_RATE;
		
		// �뢥�� ��௫��� ��� ���⮢
		printf("\n��௫�� ��� ���⮢ ࠢ�� $%.2f\n", salary);
		
		// ������� �㬬� �������
		if (salary <= BASE_TAX1)
			taxes = salary * TAX_RATE1;
		else if (salary <= BASE_TAX2)
			taxes = SUM1 + (salary - BASE_TAX1) * TAX_RATE2;
		else 
			taxes = SUM2 + (salary - BASE_TAX2) * TAX_RATE3;	
		// �㬬� �������	
		printf("�㬬� ������� ࠢ�� $%.2f\n", taxes);
			
		// ��௫��� ��᫥ ���⮢
		printf("��௫�� ��᫥ ���� ������� ࠢ�� $%.2f\n\n", salary - taxes);
		
		printf("������ �᫮, ᮮ⢥�����饥 �।���⠥��� �⠢�� ��ࠡ�⭮� ����� ��� ����⢨�:\n");
		printf("1) $%.2f/��\t\t2) $%.2f/��\n", RATE_HOUR1, RATE_HOUR2);
		printf("3) $%.2f/��\t\t4) $%.2f/��\n", RATE_HOUR3, RATE_HOUR4);
		printf("5) ��室: ");
	}
	
	exit: printf("\n�ணࠬ�� �����襭�\n");	
	
	return 0;
}