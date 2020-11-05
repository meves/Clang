// floatcnv.c - ­несогласованные преобразования с плавающей запятой
#include <stdio.h>
int main(void)
{
	float n1 = 3.0f;
	double n2 = 3.0;
	long n3 = 2000000000L;
	long n4 = 1234567890L;
	
	printf("%.le %.le %.le %.le\n", n1, n2, n3, n4);
	printf("%ld %ld\n", n3, n4);
	printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);
	
	return 0;
}