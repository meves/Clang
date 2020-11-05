// binary.c - ���⠥� 楫� �᫠ � ����筮� �ଥ
#include <stdio.h>

void to_diffrent(unsigned long n, unsigned int c);
int main(void)
{
	unsigned long number;
	unsigned int count;
	
	printf("������ 楫�� �᫮ � �᭮����� ��⥬� ��᫥��� �� 2 �� 10 "
			"(��� q ��� �����襭�� �ணࠬ��):\n");
	while ( scanf("%ld %ud", &number, &count) == 2 )
	{
		if(count >= 2 && count <= 10)
		{
			printf("���������� � ��࠭��� ��⥬� ��᫥���: ");
			to_diffrent(number, count);
			putchar('\n');
		}
		printf("������ 楫�� �᫮ � �᭮����� ��⥬� ��᫥��� �� 2 �� 10 "
				"(��� q ��� �����襭�� �ணࠬ��):\n");
	}
	printf("�ணࠬ�� �����襭�.\n");
	
	return 0;
}

void to_diffrent(unsigned long n, unsigned int c)
{
	#define CHAR 48
	int r;
	
	r = n % c;
	if ( n >= c)
		to_diffrent(n / c, c);
	
	putchar(r + CHAR);
	
	return;	
}