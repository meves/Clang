#include <stdio.h>
int main (void)
{
	char ch ;
	// вариант с switch
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
			case 'b':
				break;
			case '\n':
				break;
			case 'c':
				printf("Шaг 1\n");
				break;
			case 'g':
				printf("Шaг 1\n");
				printf("Шaг 3\n");
				break;
			default:
				printf("Шaг 1\n");
				printf("Шaг 2\n");
				printf("Шaг 3\n");
				break;
		}		
		if (ch == 'b')
			break;
	}
	
	printf("Гoтoвo \n");
	
	return 0;
}
	
/*
	вариант с goto
	while ((ch = getchar()) != '#')
	{
		if(ch == '\n')
			continue;
		printf("Шaг 1\n") ;
		if(ch == 'c')
			continue;
		else if(ch == 'b')
			break;
		else if(ch == 'g')
			goto laststep;
		printf("Шaг 2 \n");
	laststep: printf("Шaг 3\n") ;
	}
	
	варинат с if else
	while ((ch = getchar()) != '#')
	{
		if (ch == '\n')
			;
		else if (ch == 'c') 
			printf("Шaг 1\n");
		else if (ch == 'b')
			break;
		else if (ch == 'g') {
			printf("Шaг 1\n");
			printf("Шaг 3\n");			
		}
		else {
			printf("Шaг 1\n");
			printf("Шaг 2\n");
			printf("Шaг 3\n");
		}	
	}
*/	