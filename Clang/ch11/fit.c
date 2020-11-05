#include <stdio.h>
#include <string.h>

void fit(char *, unsigned int);

int main(void)
{
	char str[] = "Long string";
	
	puts(str);
	fit(str, 7);
	puts(str);
	puts(str + 8);
		
	return 0;
}

void fit(char * string, unsigned int size)
{
	if (strlen(string) > size)
		*(string + size) = '\0';
}