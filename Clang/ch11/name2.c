// name2.c -- программа считывает имя
#include <stdio.h>
#define MAX 81

int main(void)
{
	
	char name[MAX];
	char * ptr;	
	
	ptr = name;
	printf("Как вас зовут?\n");
	while( gets(name) != NULL){
		printf("%s? А! %s!\n", name, ptr);
	}
	
	return 0;
}