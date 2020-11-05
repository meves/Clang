#include <stdio.h>

int menu(void);
int print_number(int low, int high);

int main(void)
{
	int answer;
	int low, high;
	
	low = 1;
	high = 4;
	
	// make a choice
	menu();

	// recieve the answer
	while ( (answer = print_number(low, high)) == -1)
		;
	printf("Правильный ответ = %d\n", answer);
	
	return 0;	
}