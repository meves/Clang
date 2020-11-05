// animals.c - �ᯮ�짮����� ������ switch
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	
	printf("���� ��� �㪢� ��䠢�� � � 㪠�� ��� ");
	printf("�������� ����⭮��,\n��稭��饥�� � �⮩ �㪢�.\n");
	printf("������ �㪢� ��� # ��� �����襭��.\n");
	while ((ch = getchar()) != '#')
	{
		if (ch == '\n')
			continue;
		if (islower(ch))
			switch (ch)
			{
				case 'a':
					printf("�ࠣ��, ����� ���� �����᪨� ��࠭\n");
					break;
				case 'b':
					printf("������c�, ����� �����᪠� ᢨ���\n");
					break;
				case 'k':
					printf("����, ����� ��몭�������\n");
					break;
				case 'v':
					printf("����宫�, ����������饥 ����⢮\n");
					break;
				case 'e':
					printf("�娤��, �������� ��ࠢ쥤\n");
					break;
				case 'r':
					printf("�롮���, ᢥ⫮-���筥��� �㭨�\n");
					break;
				default:
					printf("�� ��㤭�� �����!\n");
			}
		else
			printf("��ᯮ������� ⮫쪮 ����� �㪢�.\n");
		while (getchar() != '\n')
			continue;
		printf("������ ᫥������ �㪢� ��� # ��� �����襭��.\n");
	}
	printf("�ணࠬ�� �����襭�.\n");
	
	return 0;
}