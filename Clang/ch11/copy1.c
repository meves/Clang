// copy1.c -- ��������樮���� �ணࠬ�� �᮫짮����� �㭪樨 strcpy()
#include <stdio.h>
#include <string.h>
#define SIZE 40
#define LIM 5
int main(void)
{
	char qwords[LIM][SIZE];
	char temp[SIZE];
	int i = 0;
	
	printf("������ %d ᫮�, ��稭������ � �㪢� q:\n", LIM);
	while (i < LIM && gets(temp))
	{
		//if (temp[0] != 'q')
		if (strncmp(temp, "q", 1) != 0)	
		{
			printf("%s �� ��稭����� � �㪢� q!\n", temp);
		} 
		else 
		{
			strcpy(qwords[i], temp);
			i++;
		}
	}
	printf("���祭� ᫮�, 㤮���⢮����� ��������� �����:\n");
	for (i = 0; i < LIM; i++)
		puts(qwords[i]);
	
	return 0;
}