// factor.c - �ᯮ���� 横� � ४���� ��� ���᫥��� 䠪�ਠ��
#include <stdio.h>
#include "header.h"
int main(void)
{
	int num;
	
	printf("�� �ணࠬ�� ������ 䠪�ਠ��.\n");
	printf("������ ���祭�� � ��������� 0-12 (��� q ��� �����襭�� �ணࠬ��):\n");
	while (scanf("%d", &num) == 1)
	{
		if ( num < 0 )
			printf("��������, �� ������ ����⥫�� �᫠.\n");
		else if ( num > 12 )
			printf("�室��� ���祭�� ������ ���� ����� 13.\n");
		else
		{
			printf("横�: 䠪�ਠ� %d = %ld\n", num, fact(num));
			printf("४����: 䠪�ਠ� %d = %ld\n", num, rfact(num));
		}
		printf("������ ���祭�� � ��������� 0-12 (��� q ��� �����襭�� �ணࠬ��):\n");
	}
	printf("�ᥣ� ��襣�.\n");
	
	return 0;
}


