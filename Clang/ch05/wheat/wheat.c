// wheat.c - �ᯮ���樠��� ���
#include <stdio.h>
#define SQUARES 64
#define CROP 1E15
int main(void)
{
	double current, total;
	int count = 1;
	
	printf("������		���������	�⮣�	");
	printf("��業� �� \n");
	printf("			��७		��७	");
	printf("�஦�� � ���\n");
	total = current = 1.0;
	printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
	while(count < SQUARES)
	{
		count = count + 1;
		current = 2.0 * current;
		total = total + current;	
		printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
	}	
	printf("��� � ��.\n");
	
	return 0;
}