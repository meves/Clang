// pizza.c - использует константы, опеределенные в контектсте пиццы
#include <stdio.h>
#define PI 3.14159
int main(void)
{
	float area, circum, radius;

	printf("Каков радиус вашей пиццы?\n");
	if (scanf("%f", &radius) != 1);
	area = PI * radius * radius;
	circum = 2 * PI * radius;
	printf("Базовые параметры вашекй пиццы:\n");
	printf("длина окружности = %1.2f площадь = %1.2f\n", circum, area);

	return 0;
}