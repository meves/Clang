// copy3.c
#include <stdio.h>
#include <string.h>
#define SIZE 40
#define TARGSIZE 7
#define LIM 5

int main(void)
{
	char qwords[LIM][TARGSIZE];
	char temp[SIZE];
	int i = 0;
	
	printf("������ %d ᫮�, ��稭������ � �㪢� q:\n", LIM);
	while (i < LIM && gets(temp))
	{
		if (strncmp(temp, "q", 1) != 0)
			printf("%s �� ��稭����� � �㪢� q!\n", temp);
		else
		{
			strncpy(qwords[i], temp, TARGSIZE-1);
			qwords[i][TARGSIZE-1] = '\0';
			i++;
		}
	}
	puts("���祭� ᫮�, 㤮���⢮����� ��������� �����:");
	for (i = 0; i < LIM; i++)
		puts(qwords[i]);
	
	return 0;
}