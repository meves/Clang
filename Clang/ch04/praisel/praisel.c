// praisel.c - использует различные представления строк
#include <stdio.h>
#define PRAISE "Какое прекрасное имя" 
int main(void)
{
	char name[40];
	
	printf("Как вас зовут?\n");
	if (scanf("%s", name) !=1);
	printf("Здравствуйте, %s, %s\n", name, PRAISE);
	
	return 0;
}