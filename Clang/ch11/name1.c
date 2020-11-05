// name1.c -- программа считывает имя
#include <stdio.h>
#include <stdbool.h>
#define MAX 81
int main(void)
{
	char name[MAX];
	
	printf("Как вас зоваут?\n");
	gets(name);
	printf("Прекрасное имя %s\n", name);	
		
	return 0;	
}