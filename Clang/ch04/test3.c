#include <stdio.h>
int main(void)
{
	int val1 = 12, val2 = 234, val3 = 1222;

	printf("%9d %9d %9d \n", val1, val2, val3);
	val1 = 4; val2 = 5; val3 = 23;
	printf("%9d %9d %9d \n", val1, val2, val3);
	val1 = 22334; val2 = 2322; val3 = 10001;
	printf("%9d %9d %9d \n", val1, val2, val3);

	return 0;
}