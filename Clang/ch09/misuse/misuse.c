// misuse.c - объявление функции по старому стандарту
#include <stdio.h>

int imax();

int main(void)
{
	printf("Наибольшим значением из %d и %d является %d.\n", 3, 5, imax(3));
	printf("Наибольшим значением из %d и %d является %d.\n", 3, 5, imax(3.0, 5.0));
	
	return 0;
}

int imax(n, m)
int n, m;
{
	int imax;
	
	if (n > m)
		imax = n;
	else 
		imax = m;
	return imax;
}