// add_one.c - ���६���: ��䨪�� � ����䨪��
#include <stdio.h>
int main(void)
{
	int ultra = 0, super = 0;
	
	while(super < 5)
	{
		super++;
		++ultra;
		printf("super = %d ultra = %d \n", super, ultra);
	}
	
	return 0;
}