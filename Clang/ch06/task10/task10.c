// task10.c - ������ 8 楫�� �ᥫ � ���ᨢ
// 			  � �뢥�� � ���⭮� ���浪�
#include <stdio.h>
#define SIZE 8
int main(void)
{
	int nums[SIZE];
	int i;
	
	printf("������ ��ᥬ� 楫�� �ᥫ: ");
	for(i = 0; i < SIZE; i++)
		scanf("%d", &nums[i]);

	for(i = SIZE-1; i >= 0; i--)	
		printf("nums[%d] = %d\n", i, nums[i]);	
	
	return 0;
}