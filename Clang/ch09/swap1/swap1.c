// swap1.c - ��ࢠ� ����⪠ ᮧ����� �㭪樨 ������ ���祭�ﬨ
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
	
	temp = u;
	u = v;
	v = temp;
}