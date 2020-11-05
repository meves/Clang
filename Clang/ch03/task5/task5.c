// task5.c - выводит возраст в секундах
#include <stdio.h>
#define SECINYEAR 3.156E7
int main(void)
{
	int years;
	float seconds;
	
	printf("Enter your age in years: ");
	scanf("%d", &years);
	seconds = years * SECINYEAR;
	printf("Your age in seconds = %e\n", seconds);
	
	return 0;
}