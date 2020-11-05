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
	
	// запросить ввод ставки заработной платы
	printf("Введите число, соответствующее предпочитаемой ставке заработной платы или действию:\n");
	printf("1) $%.2f/час\t\t2) $%.2f/час\n", RATE_HOUR1, RATE_HOUR2);
	printf("3) $%.2f/час\t\t4) $%.2f/час\n", RATE_HOUR3, RATE_HOUR4);
	printf("5) выход: ");
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
				printf("Введите число от 1 до 5: \n");
				printf("1) $%.2f/час\t\t2) $%.2f/час\n", RATE_HOUR1, RATE_HOUR2);
				printf("3) $%.2f/час\t\t4) $%.2f/час\n", RATE_HOUR3, RATE_HOUR4);
				printf("5) выход\n");
				continue;
		}
			
		// запросить кол-во часов отработанных за неделю
		printf("Введите количество часов отработанных за неделю или букву для выхода: ");
		
		if (scanf("%d", &hours) == 0)
			break;
		// рассчитать зарплату
		if (hours <= TIME)
			salary = hours * rate_hour;
		else 
			salary = TIME * rate_hour + (hours - TIME) * OVER_RATE;
		
		// вывести зарплату без вычетов
		printf("\nЗарплата без вычетов равна $%.2f\n", salary);
		
		// рассчитать сумму налогов
		if (salary <= BASE_TAX1)
			taxes = salary * TAX_RATE1;
		else if (salary <= BASE_TAX2)
			taxes = SUM1 + (salary - BASE_TAX1) * TAX_RATE2;
		else 
			taxes = SUM2 + (salary - BASE_TAX2) * TAX_RATE3;	
		// сумму налогов	
		printf("Сумма налогов равна $%.2f\n", taxes);
			
		// зарплату после вычетов
		printf("Зарплата после вычета налогов равна $%.2f\n\n", salary - taxes);
		
		printf("Введите число, соответствующее предпочитаемой ставке заработной платы или действию:\n");
		printf("1) $%.2f/час\t\t2) $%.2f/час\n", RATE_HOUR1, RATE_HOUR2);
		printf("3) $%.2f/час\t\t4) $%.2f/час\n", RATE_HOUR3, RATE_HOUR4);
		printf("5) выход: ");
	}
	
	exit: printf("\nПрограмма завершена\n");	
	
	return 0;
}