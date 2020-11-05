// task2.c - запрашивает имя и выводит его в разных форматах
#include <stdio.h>
#include <string.h>
#define ADD 3
int main(void)
{
	char name[20];
	int len;

	printf("Введите свое имя: ");
	scanf("%s", name);

	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);	
	printf("\"%-20s\"\n", name);
	len = strlen(name) + ADD;
	printf("%*s\n", len, name);

	return 0;
}