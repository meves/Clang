// task13.c 
#include <stdio.h>
#define SIZE 8
int main(void)
{
	// ᮧ���� ��� ���쬨������� ���ᨢ� ⨯� double
	double nums[SIZE], sums[SIZE];
	int i;	

	printf("������ ��ᥬ� ���祭�� ��� ��ࢮ�� ���ᨢ�: ");
	// � 横�� ����� ���祭�� ���쬨 ����⮢ ��ࢮ�� ���ᨢ�
	scanf("%lf", &nums[0]);
	sums[0] = nums[0];
	// ��������� ������ ��ண� ���ᨢ�.
	// ����� ����� 2 ���ᨢ� ࠢ�� �㬬� �।���� ����⮢ 1 ���ᨢ�
	for(i = 1; i < SIZE; i++)
	{
		scanf("%lf", &nums[i]);
		sums[i] = nums[i] + sums[i-1];
	}
		
	// �뢥�� ���祭�� ���ᨢ�� �� ����� � ���� ��ப�� �� �⮫�栬
	for(i = 0; i < SIZE; i++)
		printf("%10.3f ", nums[i]);
	printf("\n");
	for(i = 0; i < SIZE; i++)
		printf("%10.3f ", sums[i]);

	return 0;
}