// minsec.c - ��ॢ���� ᥪ㭤� � ������ � ᥪ㭤�
#include <stdio.h>
#define SEC_PER_MIN 60
int main(void)
{
	int sec, min, left;
	
	printf("��ॢ�� ᥪ㭤 � ������ � ᥪ㭤�!\n");
	printf("������ ������⢮ ᥪ㭤 (<=0 ��� ��室�):\n");
	scanf("%d", &sec);
	
	while(sec > 0){
		min = sec / SEC_PER_MIN;
		left = sec % SEC_PER_MIN;
		printf("%d ᥪ㭤 - �� %d ����� %d ᥪ㭤.\n", sec, min, left);
		printf("������ ᫥���饥 ���祭�� (<=0 ��� ��室�):\n");
		scanf("%d", &sec);
	}
	
	printf("�������!\n");
	
	return 0;
}