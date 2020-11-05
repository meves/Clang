// task2.c - печатает символ по числовому коду
#include <stdio.h>
int main(void)
{
	char ch;
	
	while(1)
	{
		printf("Enter numeric code for ASCII symbol or 0 to exit: ");
		scanf("%d", &ch);
		if(ch == 0)
			break;
		printf("You entered symbol %c\n", ch);
	}
	
	return 0;
}