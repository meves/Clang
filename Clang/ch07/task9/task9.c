// task9.c
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	int integer;
	int i, j;
	bool isSimple;
	
	// ����� 楫�� �᫮
	printf("������ 楫�� �᫮, ����� ��� (��� 0 ��� ��室�): ");
	while (scanf("%d", &integer))
	{
		if (integer < 0) {
			printf("��᫮ ����� ���� ����� ���!\n"
			" ������ 楫�� �᫮, ����� ���(��� 0 ��� ��室�): ");
			continue; 
		}
				
		switch (integer)
		{
			case 0:
				goto end;
			case 1:
				printf("�� ������ �ᥫ ��� %d: %d", integer, integer);
				goto next;
			case 2:
				printf("�� ������ �ᥫ ��� %d: %d", integer, integer);
				goto next;				
		}
		
		printf("�� ������ �ᥫ ��� %d: ", integer);
		// �뢥�� �� ����� �᫠ ����� ��� ࠢ�� ����������
		for (i = 3; i <= integer; i++)
		{
			isSimple = true;
			for (j = 2; j < i; j++)
			{
				if ((i % j) == 0)
				{
					isSimple = false;
					break;
				}
			}
			if (isSimple)
				printf("%d ", i);
		}
		next: printf("\n������ ᫥���饥 楫�� �᫮, ����� ��� (��� 0 ��� ��室�): ");
	}
	end: printf("\n�ணࠬ�� �����襭�!\n");	
	
	return 0;
}


