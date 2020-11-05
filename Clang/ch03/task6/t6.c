// t6.c - вычисляет количество молекул воды в заданном объееме в квартах
#include <stdio.h>
#define massa 3.0e-23
#define quarta 950
int main(void)
{
	int quartas;

	printf("Введите объем воды в квартах: ");
	if (scanf("%d", &quartas) != 1);
	printf("Количество молекул воды в %d квартах(-е) равно %e штукю\n", quartas, (quartas * quarta) / massa);

	return 0;
}