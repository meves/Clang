#include <stdio.h>
double garmonical(double one, double two);
int main(void)
{
	double one, two;
	
	one = 2.0;
	two = 3.0;
	printf("�।��� ��ମ���᪮� %.2f � %.2f ࠢ�� %.2f",
			one, two, garmonical(one, two));
	
	return 0;
}