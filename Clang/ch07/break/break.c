// break.c - �ᯮ���� ������ break ��� ��室� �� 横��
#include <stdio.h>
int main(void)
{
	float length, width;
	
	printf("������ ����� ��אַ㣮�쭨��:\n");
	while (scanf("%f", &length) == 1)
	{
		printf("����� = %0.2f:\n", length);
		printf("������ �ਭ� ��אַ㣮�쭨��:\n");
		if (scanf("%f", &width) != 1)
			break;
		printf("��ਭ� = %0.2f:\n", width);
		printf("���頤� = %0.2f:\n", width * length);
		printf("������ ����� ��אַ㣮�쭨��:\n");
	}
	printf("�ணࠬ�� �����襭�.\n");
	
	return 0;
}