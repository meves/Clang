// summing.c - �㬬���� 楫� �᫠, ������� � ���ࠪ⨢��� ०���
#include <stdio.h>
int main(void)
{
	long num;
	long sum = 0L;
	
	printf("������ 楫�� �᫮ ��� ��᫥���饣� �㬬�஢���� ");
	printf("(��� q ��� �����襭�� �ணࠬ��): ");
	
	while(scanf("%ld", &num) == 1)
	{
		sum = sum + num;
		printf("������ ᫥���饥 楫�� �᫮ (��� q ��� �����襭�� �ணࠬ��): ");		
	}
	
	printf("�㬬�, ��������� 楫�� �ᥫ ࠢ�� %ld.\n", sum);
	
	return 0;
}