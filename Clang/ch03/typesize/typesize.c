// typesize.c  - выводит информацмю о длине типов данных в системе
#include <stdio.h>
int main(void)
{
	printf("sizeof(short) = %zd \n", sizeof(short));
	printf("sizeof(int) = %zd \n", sizeof(int));
	printf("sizeof(long) = %zd \n", sizeof(long));
	printf("sizeof(long long) = %zd \n", sizeof(long long));
	printf("sizeof(float) = %zd \n", sizeof(float));
	printf("sizeof(double) = %zd \n", sizeof(double));
	printf("sizeof(long double) = %zd \n", sizeof(long double));
	printf("sizeof(_Bool) = %zd \n", sizeof(_Bool));
	printf("sizeof(char) = %zd \n", sizeof(char));	
	
	return 0;
}