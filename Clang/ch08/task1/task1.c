// task1.c - ������뢠�� ������⢮ �������� ᨬ����� �� ���� 䠩��
#include <stdio.h>
int main(void)
{
	int counter;
	
	while (getchar() != EOF)
		counter++;
	
	printf("������� (� 䠩��) %d ᨬ�����\n", counter);
	
	return 0;
}