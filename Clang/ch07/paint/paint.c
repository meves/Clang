// paint.c - �ᯮ�짮����� �᫮���� ����樨
#include <stdio.h>
#define COVERAGE 200
int main(void)
{
	int sq_feet;
	int cans;
	
	printf("������ �᫮ �������� ��⮢, ����� ����室��� �������:\n");
	while (scanf("%d", &sq_feet) == 1)
	{
		cans = sq_feet / COVERAGE;
		cans += ((sq_feet % COVERAGE) == 0) ? 0 : 1;
		printf("��� �⮣� ���ॡ���� %d %s ��᪨.\n", cans, cans == 1 ? "�����" : "�����");
		printf("������ ᫥���饥 ���祭�� (��� q ��� �����襭��):\n");
	}
	
	return 0;
}