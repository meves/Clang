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

void clean_buffer(void);

int main(void)
{
	int hours;
	double salary, taxes;
	char choice;
	double rate_hour;
	
	// ������� ���� �⠢�� ��ࠡ�⭮� �����
	printf("������ �㪢�, ᮮ⢥�����饥 �।���⠥��� �⠢�� ��ࠡ�⭮� ����� ��� ����⢨�:\n");
	printf("a) $%.2f/��\t\tb) $%.2f/��\n", RATE_HOUR1, RATE_HOUR2);
	printf("c) $%.2f/��\t\td) $%.2f/��\n", RATE_HOUR3, RATE_HOUR4);
	printf("e) ��室: ");
	while (scanf("%c", &choice) == 1)
	{
		switch (choice)
		{
			case 'a':
				rate_hour = RATE_HOUR1;
				break;
			case 'b':
				rate_hour = RATE_HOUR2;
				break;
			case 'c': 
				rate_hour = RATE_HOUR3;
				break;
			case 'd':
				rate_hour = RATE_HOUR4;
				break;
			case 'e':
				goto exit;
			default:
				printf("������ ����!\n������ �㪢� �� a �� e: \n");
				printf("a) $%.2f/��\t\tb) $%.2f/��\n", RATE_HOUR1, RATE_HOUR2);
				printf("c) $%.2f/��\t\td) $%.2f/��\n", RATE_HOUR3, RATE_HOUR4);
				printf("e) ��室\n");
				clean_buffer();
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
		
		// ������ ����
		clean_buffer();
		
		// ��௫��� ��᫥ ���⮢
		printf("��௫�� ��᫥ ���� ������� ࠢ�� $%.2f\n\n", salary - taxes);
		
		printf("������ �㪢�, ᮮ⢥�����饥 �।���⠥��� �⠢�� ��ࠡ�⭮� ����� ��� ����⢨�:\n");
		printf("a) $%.2f/��\t\tb) $%.2f/��\n", RATE_HOUR1, RATE_HOUR2);
		printf("c) $%.2f/��\t\td) $%.2f/��\n", RATE_HOUR3, RATE_HOUR4);
		printf("e) ��室: ");
	}
	
	exit: printf("\n�ணࠬ�� �����襭�\n");	
	
	return 0;
}

void clean_buffer(void)
{
	while (getchar() != '\n')
		continue;	
}