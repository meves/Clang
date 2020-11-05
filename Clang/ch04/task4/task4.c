// task4.c - запрашивает имя и рост в сантиметрах
// и выводит его в метрах
#include <stdio.h>
#define METER 100
#define SZ 21
int main(void)
{
	float height; 	// рост в сантиметрах
	char name[SZ];	// имя

	printf("Введите ваше имя: ");
	scanf("%s", name);
	printf("Введите ваш рост в сантиметрах: ");
	scanf("%f", &height);
	printf("%s, ваш рост составляет %.2f метров\n", name, height / METER);

	return 0;
}