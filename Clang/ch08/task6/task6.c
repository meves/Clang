// task6.c - технология меню
#include <stdio.h>
#include <ctype.h>
int get_alpha(void);
int main(void)
{
	char alpha;
	
	alpha = get_alpha();
	printf("Первая буква: %c.\n", alpha);
	return 0;
}

int get_alpha(void)
{
	int ch;
	
	while (ch = getchar())
	{
		if (isgraph(ch)) break;		
	}
	
	return ch;
}


