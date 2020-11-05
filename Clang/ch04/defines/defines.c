// defines.c - использует определенные константы из файла limits.h и тип float
#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void)
{
	printf("Некоторые пределы для данной системы:\n");
	printf("Наибольшее значение типа int: %d\n", INT_MAX);
	printf("Наименьшее значение типа long long: %lld\n", LLONG_MIN);
	printf("Один байт  = %d разрядов в данной системе.\n", CHAR_BIT);
	printf("Наибольшее значение типа double: %e\n", DBL_MAX);
	printf("Наименьшее нормальное значение типа float: %e\n", FLT_MIN);
	printf("Точность значений типа float = %d знаков\n", FLT_DIG);
	printf("Различие между 1,00 и наименьшим значением float, превышающим 1,00 = %e\n", FLT_EPSILON);

	return 0;
}