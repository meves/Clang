// starsrch.c -- �ᯮ�짮����� �㭪樨 strncmp()
#include <stdio.h>
#include <string.h>

#define LISTSIZE 5

int main(void)
{
	const char * list[LISTSIZE] = 
	{
		"astronomy", "astounding",
		"astrophysics", "ostracize",
		"asterizm"
	};
	int count = 0;
	int i;
	
	for (i = 0; i < LISTSIZE; i++)
		if (strncmp(list[i], "astro", 5) == 0)
		{
			printf("�������: %s\n", list[i]);
			count++;
		}
	printf("���᮪ ᮤ�ন� %d ᫮�(�, �), ��稭������ � astro.\n", count);	
	
	return 0;
}