/* day_mon1.c -- �뢮��� �� ����� ������⢮ ���� ������� ����� */
#include <stdio.h>
#define MONTHS 12
int main(void)
{
	const int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int index;
	
	for(index = 0; index < MONTHS; index++)
		printf("����� %d ����� %2d ���� (����).\n", index+1, days[index]);

	return 0;
}