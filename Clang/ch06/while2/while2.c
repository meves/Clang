//while2.c - правильно расставляйте точки с запятой
#include <stdio.h>
int main(void)
{
	int n = 0;
	
	while(n++ < 3);
		printf("n равно %d\n", n);
	printf("Это все, что может сделать программа.\n");	
	
	return 0;
}