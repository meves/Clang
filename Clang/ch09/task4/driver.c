#include <stdio.h>
double garmonical(double one, double two);
int main(void)
{
	double one, two;
	
	one = 2.0;
	two = 3.0;
	printf("Среднее гармоническое %.2f и %.2f равно %.2f",
			one, two, garmonical(one, two));
	
	return 0;
}