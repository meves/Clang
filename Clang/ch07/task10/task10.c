// task10.c
#include <stdio.h>
#define INCOME1 17850
#define INCOME2 23900
#define INCOME3 29750
#define INCOME4 14875
#define RATE1 0.15
#define RATE2 0.28
#define BASE1 INCOME1 * RATE1
#define BASE2 INCOME2 * RATE1
#define BASE3 INCOME3 * RATE1
#define BASE4 INCOME4 * RATE1
int main()
{
	double income, tax;
	int kategory;
	
	// выбрать категорию
	printf("Введите ваш доход до налогов или любой символ для выхода: ");
	while ( scanf("%lf", &income) == 1 )
		{	
		// выбрать налогооблагаемый доход
		kat: printf("Введите категорию налогоплательщика (от 1 до 4): ");
		scanf("%d", &kategory);
		
		// вычислить сумму налогов
		switch (kategory)
		{
			case 1:
				if (income <= INCOME1)
					tax = income * RATE1;
				else
					tax = BASE1 + (income - INCOME1) * RATE2;
				break;
			case 2:
				if (income <= INCOME2)
					tax = income * RATE1;
				else
					tax = BASE2 + (income - INCOME2) * RATE2;
				break;				
			case 3:
				if (income <= INCOME3)
					tax = income * RATE1;
				else
					tax = BASE3 + (income - INCOME3) * RATE2;
				break;				
			case 4:
				if (income <= INCOME4)
					tax = income * RATE1;
				else
					tax = BASE4 + (income - INCOME4) * RATE2;	
				break;	
			default:
				printf("Введено недопустимое значение!\n");
				goto kat;
		}	
		printf("Ваша сумма налогов к уплате = %.2f\n", tax);	
		// повторить итерацию или выйти из программы
		printf("Введите ваш доход до налогов или любой символ для выхода: ");
	}	
	printf("Программа завершена!\n");
		
	return 0;
}