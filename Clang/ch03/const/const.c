// const.c -  использует суффиксы для констант
#include <stdio.h>
int main(void)
{
	long long array[10];
	long long *ptrll;

	ptrll = array;
	*ptrll = 1LL;
	printf("array[0] = %lld\n", *ptrll);

	return 0;
}