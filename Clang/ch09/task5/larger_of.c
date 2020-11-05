#include <stdio.h>
void larger_of(int * x, int * y);
int main(void)
{
	int x, y;
	
	x = 5, y = 7;
	printf("x = %d y = %d\n", x, y);
	larger_of(&x, &y);
	printf("x = %d y = %d\n", x, y);	
	
	return 0;
}

void larger_of(int * x, int * y)
{
	if(*x > *y)
		*y = *x;	
	else
		*x = *y;
}