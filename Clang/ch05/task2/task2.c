// task2.c - �뢮��� 10 �ᥫ ��稭�� � ����������
#include <stdio.h>
int main(void)
{
	int num, num10;
	
	printf("������ �� 楫�� �᫮: ");
	scanf("%d", &num);
	num10 = num + 10;
	while(num <= num10)
	{
		printf("%d\t", num);
		++num;
	}
	
	return 0;
}