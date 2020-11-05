// task7.c - вычисляет расход горючего по американской и 
// европейской системам измерения
#include <stdio.h>
#define GALOON 3.785
#define MILE 1.609
int main(void)
{
	float miles, galoons; // пройденное расстояние в милях и израсходованный бензин в галлонах

	printf("Введите пройденное расстояние в милях: ");
	scanf("%f", &miles);
	printf("Введите потраченный бензин в галонах: ");
	scanf("%f", &galoons);

	printf("Вы прошли %.1f миль на одном галлоне топлива\n", miles / galoons);
	printf("Ваш расход топлива составил %.1f литров на 1 км\n", (galoons * GALOON) / (miles * MILE));
	printf("Ваш расход топлива составил %.1f литров на 100 км\n", (galoons * GALOON) / (miles * MILE) * 100);

	return 0;
}