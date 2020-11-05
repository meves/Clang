#include <stdio.h>

int menu(void);

int print_number(int low, int high)
{
	int number;
	
	scanf("%d", &number);
	while ( getchar() != '\n') continue;
	if ( number < low || number > high )
	{	
		menu();		
		return -1;
	}	
	else
	{
		return number;		
	}
}