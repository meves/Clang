#include <stdbool.h>
#include <stdlib.h>

char * sncpy(char * s1, const char * s2, size_t n)
{
	char * pcur;
	size_t counter;
	bool flag;
	
	pcur = s1;
	flag = false;	
	for (counter = 0; counter < n; counter++)
	{
		if ((*s2 == '\0') || flag)
		{
			flag = true;
			*pcur++ = '\0';
		} else {
			*pcur++ = *s2++;			
		}
	}	
			
	return s1;
}