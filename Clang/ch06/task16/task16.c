// task16.c - использование лимита денег
#include <stdio.h>
#define BONUS 1000000.0
#define RATE 0.08
#define WITHDRAW 100000.0
int main(void)
{
	double sum;
	int years;
	
	years = 0;
	// положить на счет миллион по ставке 8%
	sum = BONUS;
	do{
		sum *= (1 + RATE);
		// в последний день года снять 100 тыс долларов
		sum -= WITHDRAW;
		years++;
		
	} while(sum > 0);
	
	printf("Через %d лет на счете не останется денег!\n", years);
	
	return 0;
}