// stdbool.c - �ᯮ�짮����� ��६����� ⨯� bool
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	long num;
	long sum = 0L;
	bool input_is_good = true;
	
	printf("������ 楫�� �᫮ ��� ��᫥���饣� �㬬�஢����: ");
	printf("(��� q ��� �����襭�� �ணࠬ��): ");
	input_is_good = (scanf("%ld", &num) == 1);
	while(input_is_good)
	{
		sum = sum + num;
		printf("������ ᫥���饥 楫�� �᫮ (��� q ��� �����襭�� �ணࠬ��): ");
		input_is_good = (scanf("%ld", &num) == 1);
	}
	printf("�㬬� ��������� 楫�� �ᥫ ࠢ�� %ld.\n", sum);	
	
	return 0;
}