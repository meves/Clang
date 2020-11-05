// showf_pt.c - отображает значение типа двумя способами
#include <stdio.h>
int main(void)
{
	float about = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;

	printf("%f может быть записано как %e\n", about, about);
	printf("%f может быть записано как %e\n", abet, abet);
	printf("%Lf может быть записано как %Le\n", dip, dip);

	return 0;
}