// strings.c  -- ������樮��஢���� ���짮��⥫��
#include <stdio.h>
#define MSG "�� ������ �������� ������� ⠫��⠬�. ������� �������."
#define LIM 5
#define LINELEN 81

int main(void)
{
	char name[LINELEN];
	char talents[LINELEN];
	int i;
	const char m1[40] = "����ࠩ��� 㫮������ � ���� ��ப�.";
	const char m2[] = "�᫨ ��� ��祣� �� ��室�� � ������, �ਤ㬠�� ��-�����.";
	const char *m3 = "\n��, � ᥡ� �����筮, � ��� ��� �����?";
	const char *mytal[LIM] = {
		"���������� ᪫��뢠��� �ᥫ",					
		"��筮� 㬭������",
		"������������ ������",
		"�ᯮ������ ������権 � �筮���� �� ��᫥���� �㪢�",
		"������ �몠 �ணࠬ��஢���� C"
	};
	
	printf("��ࠢ����! � �������� �� ����� �����."
			"� ���� ���� ⠫��⮢.\n");
	printf("����� � ��᪠�� ���-�� � ���.");
	puts("�� � ���� �� ⠫����? ��� ⮫쪮 ����� �� ���祭�.");
	for(i = 0; i < LIM; i++)
		puts(mytal[i]);
	puts(m3);
	gets(name);
	printf("���� %s %s\n", name, MSG);
	printf("%s\n%s\n", m1, m2);
	gets(talents);
	puts("��ᬮ�ਬ, ���� �� � ���� ��� ���祭�:");
	puts(talents);
	printf("��������� �� ���ଠ��, %s.\n", name);
	
	return 0;
}