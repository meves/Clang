// proto.c
#include <stdio.h>

int imax(int, int);

int main(void)
{
	printf("�������訬 ���祭��� �� %d � %d ���� %d.\n", 3, 5, imax(3, 5));
	printf("�������訬 ���祭��� �� %d � %d ���� %d.\n", 3, 5, imax(3.0, 5.0));
	
	return 0;
}

int imax(n, m)
int n, m;
{
	int imax;
	
	if (n > m)
		imax = n;
	else 
		imax = m;
	return imax;
}
