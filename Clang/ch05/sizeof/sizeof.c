// sizeof.c - �ᯮ�짮����� ����樨 sizeof
#include <stdio.h>
int main(void)
{
	int n = 0;
	size_t intsize;
	
	intsize = sizeof (int);
	printf("n = %d, n ��⮨� �� %zd ���⮢; �� ���祭�� int ����� %zd ���⮢.\n",
				n, sizeof n, intsize);
	
	return 0;
}