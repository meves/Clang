// �ࠩ��� ��� �஢�ન �㭪樨 getnchars
#include <stdio.h>
#include "getnchars.h"
#define BUF 4096	// ࠧ��� ���ᨢ� ��� �ਥ�� ᨬ�����
int main(void)
{
	char rec[BUF];		// �ਥ���� ᨬ����� � ���ன�⢠ �����
	int count = 0;		// ���稪 �맮��� 
	unsigned size;	
	
	puts("������ ������⢮ ᨬ����� ��� ���뢠���.");
	scanf("%ud", &size);
	puts("������ ��ப� �� ����� 4096 ᨬ�����:");
	
	getnchars(rec, size);
	puts("����ন��� �ਥ�����:");
	puts(rec);
	
	return 0;
}