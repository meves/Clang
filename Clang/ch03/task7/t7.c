// t7.c - запрашивает рост в сантиметрах и переводит его в дюймы
#include <stdio.h>
#define INCH 2.54f
int main(void)
{
	int sm;

	printf("Введите свой рост в сантиметрах: ");
	if (scanf("%d", &sm) != 1);
	printf("Ваш рост в дюймах %f\n", sm / INCH);

	return 0;
}