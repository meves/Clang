// fnsym.c -- �����頥� 㪠��⥫� �� ��ࢮ� �宦����� ᨬ����
#include <stdio.h>
const char * fndsmbl(const char * str, char ch)
{
	while (*str != ch && *str != '\0')
		str++;
	
	if ( *str == '\0')
		return NULL;
	
	return str;
}