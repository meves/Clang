// task7.c - печатает куб числа
#include <stdio.h>
void cube(float f);
int main(void)
{
	float f;
	printf("Введите число с плавающей запятой: ");
	scanf("%f", &f);
	
	cube(f);
	
	return 0;
}

void cube(float f)
{
	printf("Куб числа %f равен %f\n", f, f*f*f);
}