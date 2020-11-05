// ¢¢¥áâ¨ ¤¥áïâì áâà®ª ¤«¨­®© ­¥ ¡®«¥¥ 80 á¨¬¢®«®¢
// ¤®¡ ¢¨âì á¨¬¢®« ª®­æ  áâà®ª¨
// ¢¢¥áâ¨ ¯à®¢¥àªã EOF ¤«ï ¢ëå®¤  ¨§ äã­ªæ¨¨
// save on focus lost: true
#include <stdio.h>
#include "strLib.h"

void fillin_array(char (*arr)[COLS], int rows)
{
	int counter;

	for (counter = 0; counter < rows; counter++)
	{
		char *p;
		p = fgets(*(arr + counter), COLS, stdin);
		if (p == NULL)
			break;		
	}
	printf("counter = %d\n", counter);
	// test
	for (int i = 0; i < counter; i++)
	{
		fputs(*(arr+i), stdout);
	}
}