// task1.c - запрашивает имя и фамилию и печатает их в обратном порядке
#include <stdio.h>
int main(void)
{
	char fName[20];
	char lName[40];
	
	printf("Введите ваше имя и фамилию: ");
	scanf("%s%s", fName, lName);
	printf("%s, %s\n", lName, fName);
	
	return 0;
}