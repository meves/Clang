// lesser.h
#include <stdio.h>

int imin(int, int);

int main(void)
{
	int evil1, evil2;
	
	printf("������ ��� 楫�� �᫠ (��� q ��� �����襭�� �ணࠬ��):\n");
	while ( scanf("%d %d", &evil1, &evil2) == 2 )
	{
		printf("����訬 �� ���� �ᥫ %d � %d ���� %d.\n", 
				evil1, evil2, imin(evil1, evil2));
		printf("������ ��� 楫�� �᫠ (��� q ��� �����襭�� �ணࠬ��):\n");		
	}
	printf("�ணࠬ�� �����襭�.\n");
	
	return 0;
}

int imin(int n, int m)
{
	int min;
	
	if (n < m)
		min = n;
	else
		min = m;
	
	return min;
}