// years.c - печатает количество прожитых лет и дней
#include <stdio.h>
int main(void)
{
	int years, days;	// количество лет и дней

	years = 48;
	days = 365 * years;
	printf("Мой возраст в годах: %d полных лет, в днях: %d дней.\n", years, days);
	return 0;
}