// input.c - когда использовать знак &
#include <stdio.h>
int main(void)
{
	int age;
	float assets;
	char pet[30];
	
	printf("Ввдите информацию о своем возрасте, о сумме в банке "
			"и о любимом животном.\n");
	if (scanf("%d %f", &age, &assets) != 2);
	if (scanf("%s", pet) != 1);
	printf("%d $%.2f %s\n", age, assets, pet);	
	
	return 0;
}