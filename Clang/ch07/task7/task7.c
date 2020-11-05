// task7.c
#include <stdio.h>
#define RATE_HOUR 10.00
#define OVER_RATE 15.00
#define TIME 40
#define BASE_SALARY TIME * RATE_HOUR
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

			
	// запросить кол-во часов отработанных за неделю
	printf("Введите количество часов отработанных за неделю или букву для выхода: ");
	
	while (scanf("%d", &hours) == 1)
	{
		// рассчитать зарплату
		if (hours <= TIME)
			salary = hours * RATE_HOUR;
		else 
			salary = BASE_SALARY + (hours - TIME) * OVER_RATE;
		
		// вывести зарплату без вычетов
		printf("Зарплата без вычетов равна $%.2f\n", salary);
		
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
		printf("Зарплата после вычета налогов равна $%.2f\n", salary - taxes);
		printf("Введите количество часов отработанных за неделю или букву для выхода: ");
	}
	printf("Программа завершена\n");	
	
	return 0;
}