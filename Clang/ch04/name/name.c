// name.c
#include <stdio.h>
int main(void)
{
	char name[40] = "Simpsons";
	double cash = 123.55;
	
	printf("Семья %s может стать богаче на %.2f долларов!\n", name, cash);
	
	return 0;
}