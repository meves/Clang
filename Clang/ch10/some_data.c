/* some_data.c -- ���筮 ���樠����஢���� ���ᨢ */
#include <stdio.h>
#define SIZE 16
int main(void)
{
	int some_data[SIZE] = {0};
	int i;
	
	printf("%2s%14s\n", "i", "some_data[i]");
	for(i = 0; i < SIZE; i++)
		printf("%2d%14d\n", i, some_data[i]);
	
	return 0;
}