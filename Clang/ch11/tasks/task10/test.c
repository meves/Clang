#include <stdio.h>

int main(void)
{
	/*char ch;

	while ((ch = getchar()) != '\n')
		putchar(ch);
	
	putchar('\n');*/

	#define uint unsigned int

	uint number;
	int rezult;

	rezult = scanf("%u", &number);
	printf("%u", number);

	char ch;
	while ((ch = getchar()) != '\n')
		putchar(ch);

	return 0;
}