// calc.c - ��������
#include <stdio.h>
int main(void)
{
	int num1, num2;
	
	printf("������ ��ࢮ� 楫�� �᫮: ");
	scanf("%d", &num1);
	printf("������ ��஥ 楫�� �᫮: ");
	scanf("%d", &num2);
	printf("��� �㬬� �᫠ %#X � �᫠ %#X � ��⭠����筮� �ଥ %#X\n", num1, num2, num1+num2);
	
	return 0;
}