// task5.c - ���⠥� ⠡���� �����⮢ � �㡮� �ᥫ
#include <stdio.h>
int main(void)
{
	int low, high;
	int i;
	
	printf("������ 楫�� �᫮: ");
	scanf("%d", &low);
	printf("������ ��஥ 楫�� �᫮, ����� ��ࢮ��: ");
	scanf("%d", &high);
		
	printf("��᫮ ������  ��\n");	
	for(i = low; i <= high; i++)
		printf("%5d %5d %6d\n", i, i*i, i*i*i);
	
	return 0;
}