#include <stdio.h>
char * reverse(char * s)
{
	char temp;			// �६����� �࠭���� ᨬ����
	char * st, * end;	// �ᯮ����⥫�� 㪠��⥫�
	 	
	if (*s == '\0' || *(s+1) == '\0')	// �᫨ � ��ப� ⮫쪮 ᨬ��� '\0' ��� ���� ᨬ��� - ��祣� �� ������
		return s;
	
	end = s;						// ��楫����� end �� ��砫� ��ப�
	
	while (*end)
		end++;					// ���� ��᫥����� ᨬ����		end == '\0'
	// � ��砫� � ���� �������� � �।��� ���ᨢ�
	for (st = s, end--; (end - st) > 0; st++, end--)
	{
		// ���塞 ���⠬� ���� � ��᫥���� ᨬ����
		temp = *st;			 
		*st = *end;	
		*end = temp;					
	}
	
	return s;
}

