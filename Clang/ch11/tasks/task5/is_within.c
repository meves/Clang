//is_within -- �஢���� ����稥 ᨬ���� � ��ப�
#include <stdbool.h>
#include <stdio.h>
bool is_within(const char * str, unsigned char ch)
{
	// �饬 ᨬ��� �� ���� ��ப�
	while (*str != ch && *str != '\0')
		str++;
	
	// �᫨ ᨬ��� �� ������
	if (*str == '\0')
		return false;
	// �᫨ ᨬ��� ������
	else
		return true;	
}