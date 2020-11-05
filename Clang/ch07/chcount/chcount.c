// chcount.c - использование логического оператора AND
#include <stdio.h>
#include <iso646.h>
#define PERIOD '.'
int main(void)
{
	int ch;
	int charcount = 0;
	
	while((ch = getchar()) != PERIOD)
	{
		if(ch != '"' and ch != '\'')
			charcount++;
	}
	printf("В данном предложении содержатся %d символов, отличных от кавычек.\n", charcount);
		
	return 0;
}