#include <stdio.h>
#define SIZE 81

int main(void)
{
	char line[SIZE];
	/*
	while (gets(line))
		puts(line);
	*/
	while(fgets(line, SIZE, stdin))
		fputs(line, stdout);
	
	return 0;	
}