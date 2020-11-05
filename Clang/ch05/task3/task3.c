// task3.c - переводит дни в недели и дни
#include <stdio.h>
int main(void)
{
	int days, week, day;
	const int DAYS_IN_WEEK = 7;
	
	printf("Введите количество дней или 0 для выхода\n");
	scanf("%d", &days);
	while(days > 0)
	{
		week = days / DAYS_IN_WEEK;
		day = days % DAYS_IN_WEEK;
		printf("%d дней составляют %d недели %d дней\n", days, week, day);
		printf("Введите количество дней или 0 для выхода\n");
		scanf("%d", &days);
	}
	
	return 0;
}