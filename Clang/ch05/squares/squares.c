// squares.c - �������� ⠡���� �����⮢ 20 ���祭��
#include <stdio.h>
int main(void)
{
	int num = 0;
	
	while(++num < 21)
	{
		printf("%4d %6d\n", num, num*num);
		//num = num + 1;
	}
	
	return 0;
}