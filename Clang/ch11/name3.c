// name3.c -- программа считывает миена, пользуясь функцией fgets()
#include <stdio.h>
#define MAX 8

int main(void)
{
	char name[MAX];
	char * ptr;
	
	printf("Как вас зовут?\n");
	ptr = fgets(name, MAX, stdin);
	printf("%s? A! %s!\n", name, ptr);
	
	return 0;
}