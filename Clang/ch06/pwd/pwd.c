// pwd.c - ���� ��஫�
#include <stdio.h>
int main(void)
{
	int pwd = 13;
	int pwd_ent;
	
	do{
		printf("������ �᫮��� ��஫�: ");
		scanf("%d", &pwd_ent);
	}while(pwd_ent != pwd);
	printf("����ࠢ�塞! �� �ᯥ譮 ��諨 � ��⥬�.");
	
	return 0;
}