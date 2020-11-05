// task6.c - Выводит результат деления 1,0 / 3,0
#include <stdio.h>
#include <float.h>
int main(void)
{
	float f;
	double d;

	f = 1.0 / 3.0;
	d = 1.0 / 3.0;

	printf("%.4f %.12f %.16f\n", f, f, f);
	printf("%.4f %.12f %.16f\n", d, d, d);

	printf("FLT_DIG = %d, DBL_DIG = %d\n", FLT_DIG, DBL_DIG);

	return 0;
}