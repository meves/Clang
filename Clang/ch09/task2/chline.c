#include <stdio.h>

void chline(char ch, int i, int j)
{
	int k;
	
	for (k = 0; k <= j; k++)
	{
		if (k < i)
			printf(" ");
		else
			printf("%c", ch);
	}
}