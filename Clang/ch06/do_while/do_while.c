// do_while.c - 横� � �����᫮����
#include <stdio.h>
int main(void)
{
	const int secret_code = 13;
	int code_entered;
	do
	{
		printf("�⮡� ���� � ��� ��祭�� 诨��������, \n");
		printf("��������, ������ ᥪ��� ���: ");
		scanf("%d", &code_entered);
	}while(code_entered != secret_code);
	printf("����ࠢ�塞! �� 㦥 ���஢�!\n");
	
	return 0;
}

