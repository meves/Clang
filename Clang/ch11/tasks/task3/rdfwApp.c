#include <stdio.h>
#include "rdfw.h"
#define SZ 20
int main(void)
{
	char word[SZ];
	
	puts("������ ��ப�.");
	readFirstWord(word);
	printf("�� ����� ��ப�: %s\n", word);
	
	return 0;
}