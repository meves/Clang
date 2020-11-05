// binary.c - ���⠥� 楫� �᫠ � ����筮� �ଥ
#include <stdio.h>
void to_binary(unsigned long n);
int main(void)
{
	unsigned long number;
	
	printf("������ 楫�� �᫮ (��� q ��� �����襭�� �ணࠬ��):\n");
	while ( scanf("%ld", &number) == 1 )
	{
		printf("������ ��������: ");
		to_binary(number);
		putchar('\n');
		printf("������ 楫�� �᫮ (��� q ��� �����襭�� �ணࠬ��):\n");
	}
	printf("�ணࠬ�� �����襭�.\n");
	
	return 0;
}

void to_binary(unsigned long n)
{
	int r;
	
	r = n % 2;
	if ( n >= 2)
		to_binary(n / 2);
	putchar( r ? '1' : '0' );
	
	return;	
}