// getnchars.c -- 	�⠥� n ᨬ����� � ���ன�⢠ ����� � ���������� १����� � ���ᨢ�
//					n ������ ���� ����� 0 !
// 					�����頥� 㪠��⥫� �� ������, �� ��᫥����, ��⠭�� ᨬ�����
// 					�᫨ ��।��� ���祭�� ����� 1, �����頥� ���⭮ �ਭ��� 㪠��⥫�
#include <stdio.h>
char * getnchars(char * buf, int n) // �ਭ����� 㪠��⥫� �� ���ᨢ � �᫮ ᨬ����� 
{
	char * ptr;	// 㪠��⥫� ��� ��室� � ����� ᨬ����� � ���ᨢ
	char ch; 	// ���� ��� ��।���� ᨬ����
	int count;	// ���稪 ᨬ�����

	ptr = buf; 
	if (n <= 0)
		printf("������⢮ ᨬ����� ������ ���� ����� ��� !\n");
	else 
	{			
		count = 0;
		while (count < n && (ch = getchar()) != '>')	// ���� �� ���⨣��� ����� ����� ��� 㪠������ ������⢮ ᨬ�����
		{
			*ptr++ = ch;	// ������ ��।���� ᨬ���� � ���ᨢ
			count++;		// ���稪
		}
	}
	
	if (ch == '>')
		ptr = NULL;
	
	return ptr;
}