// cube.c - �ᯮ�짮����� 横�� for ��� ����஥��� ⠡���� �㡮� 楫�� �ᥫ
#include <stdio.h>
int main(void)
{
	int num;
	
	printf("  n  n � �㡥\n");
	for(num=1; num<=6; num++)
		printf("%5d %5d\n", num, num*num*num);
	
	return 0;
}