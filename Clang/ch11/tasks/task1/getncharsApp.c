// �ࠩ��� ��� �஢�ન �㭪樨 getnchars
#include <stdio.h>
#include "getnchars.h"
#define BUF 4096	// ࠧ��� ���ᨢ� ��� �ਥ�� ᨬ�����
int main(void)
{
	char rec[BUF];		// �ਥ���� ᨬ����� � ���ன�⢠ �����
	char * pcur;		// 㪠��⥫� �� �஬������ �ਥ��� ����
	int count = 0;		// ���稪 �맮��� 
	unsigned size;	
	
	puts("������ ������⢮ ᨬ����� ��� ���뢠���.");
	scanf("%ud", &size);
	puts("������ ��ப� �� ����� 4096 ᨬ����� ('>' ��� ��室�):");
	
	pcur = rec;	// ��楫����� 㪠��⥫� �� ��砫� �ਥ�����	
	while ((pcur = getnchars(pcur, size)) != NULL)
		count++;
					
	printf("�㭪�� getnchars �뫠 �맢��� %d ࠧ\n", count);
	puts("����ন��� �ਥ�����:");
	puts(rec);
	
	return 0;
}