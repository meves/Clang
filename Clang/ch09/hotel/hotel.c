// hotel.c - �㭪�� �ࠢ����� �⥫��
#include <stdio.h>
#include "hotel.h"
int menu(void)
{
	int code, status;
	
	printf("\n%s%s\n", STARS, STARS);
	printf("������ �᫮, ᮮ⢥�����饥 ��࠭���� �⥫�:\n");
	printf("1) Fairfield Arms		2) Hotel Olympic\n");
	printf("3) Chertworthy Plaza		4) The Stockton\n");
	printf("5) ��室\n");
	printf("%s%s\n", STARS, STARS);
	while ( (status = scanf("%d", &code)) != 1 ||
				(code < 1 || code > 5))
	{
		if (status != 1)
			scanf("%*s");
		printf("�������� ������ 楫�� �᫮ �� 1 �� 5.\n");
	}
	return code;
}
int getnights(void)
{
	int nights;
	
	printf("�� ᪮�쪮 ��⮪ �� १�ࢨ��� �����? ");
	while (scanf("%d", &nights) != 1)
	{
		scanf("%*s");
		printf("�������� ������ 楫�� �᫮, ⠪�� ��� 2.\n");
	}
	return nights;
}
void showprice(double rate, int nights)
{
	int n;
	double total = 0.0;
	double factor = 1.0;
	
	for (n = 1; n <= nights; n++, factor *= DISCOUNT)
		total += rate * factor;
	printf("���� �⮨����� ��⠢��� $%0.2f.\n", total);
}