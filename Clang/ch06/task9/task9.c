// task9.c - 
#include <stdio.h>
int main(void)
{
	int low, high;
	int i;
	long long sum;
		
	// ������� ���� ���孥�� � ������� �।����
	// ��᫥����⥫쭮�� 楫�� �ᥫ
	printf("������ 楫��᫥��� ������ �।��: ");
	scanf("%d", &low);
	printf("������ 楫��᫥��� ���孨� �।��: ");
	scanf("%d", &high);
	
	while(low < high)// ��⠭����� �ணࠬ�� �᫨ ���孨� �।�� ����� ��� ࠢ�� �������
	{
		sum = 0LL;
		// ���᫨�� �㬬� �����⮢ ��᫥����⥫쭮��
		for(i = low; i <= high; i++)
			sum += (long long)i*i;
		
		// �⮡ࠧ��� १���� �� �࠭�
		printf("�㬬� �����⮢ ࠢ��: %lld\n", sum);
		
		// ������� ���� ���孥�� � ������� �।����
		// ��᫥����⥫쭮�� 楫�� �ᥫ
		printf("������ 楫��᫥��� ������ �।��: ");
		scanf("%d", &low);
		printf("������ 楫��᫥��� ���孨� �।��: ");
		scanf("%d", &high);
	}
		
	return 0;
}