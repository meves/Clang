// format.c -- �ଠ�஢���� ��ப�
#include <stdio.h>
#define MAX 20

int main(void)
{
	char first[MAX];
	char last[MAX];
	char formal[2 * MAX + 10];
	double prize;
	
	puts("������ ᢮� ���:");
	gets(first);
	
	puts("������ ᢮� 䠬����:");
	gets(last);
	
	puts("������ �㬬� ��������� �ਧ�:");
	scanf("%lf", &prize);
	
	sprintf(formal, "%s, %-19s: $%6.2f\n", first, last, prize);
	puts(formal);
	
	return 0;
}