// swap2.c - ���ᬮ��७�� ��ਠ�� �ணࠬ�� swap1.c
#include <stdio.h>

void interchange(int u, int v);

int main(void)
{
	int x = 5, y = 10;
	
	printf("��ࢮ��砫쭮 x = %d � y = %d.\n", x, y);
	interchange(x, y);
	printf("������ x = %d � y = %d.\n", x, y);
	
	return 0;
}

void interchange(int u, int v)
{
	int temp;
	
	printf("��ࢮ��砫쭮 u = %d � v = %d.\n", u, v);
	temp = u;
	u = v;
	v = temp;
	printf("������ u = %d � v = %d.\n", u, v);	
}