/* day_mon2.c -- компилятор сам подсчитывает количество элекментов */
#include <stdio.h>
int main(void)
{
	const int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int index;
	
	for(index = 0; index < sizeof days / sizeof days[0]; index++)
		printf("Месяц %d имеет %2d дней (день).\n", index+1, days[index]);	
	
	return 0;
}