// task8.c - представление температуры по шкале Цельсия, Кельвина и Фаренгейта
#include <stdio.h>
#include <float.h>
void temperatures(double frnGt);
int main(void)
{
	double farengate;
	
	// ввести значение температуры по Фаренгейту
	printf("Введите значение температуры по Фаренгейту (q или любой символ для выхода): ");
	while(scanf("%lf", &farengate) == 1){
		temperatures(farengate);
		printf("Введите значение температуры по Фаренгейту (q или любой символ для выхода): ");
	}
	printf("Работа завершена.\n");
	
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
	
	printf("Температура в градусах по шкале Цельсия	Фаренгейта Кельвина\n");
	printf("\t\t\t\t%7.2f %10.2f %8.2f\n", clsm, frnGt, klvn);								
}