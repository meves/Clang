// when.c - когда цикл завершается?
#include <stdio.h>
int main(void)
{
	int n = 5;
	
	while(n < 7)
	{
		printf("n = %d\n", n);
		++n;
		printf("А теперь n = %d\n", n);
	}
	printf("Цикл завершен.");
	
	return 0;
}