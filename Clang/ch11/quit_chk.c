// quit_chk.c -- ��砫� �����ன �ணࠬ��
#include <stdio.h>
#include <string.h>

#define SIZE 8
#define LIM 100
#define STOP "quit"

int main(void)
{
	char input[LIM][SIZE];
	int ct = 0;
	
	printf("������ �� ����� %d ��ப (��� quit ��� �����襭��):\n", LIM);
	//while(ct < LIM && gets(input[ct]) != NULL && strcmp(input[ct], STOP) != 0)
	while(ct < LIM && gets(input[ct]) != NULL && input[ct][0] != 0)
		ct++;
	
	printf("������� %d ��ப\n", ct);
	
	return 0;
}