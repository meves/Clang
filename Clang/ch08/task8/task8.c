// task8.c - �믮���� ��䬥��᪨� ����樨
#include <stdio.h>

char get_choice(void);
char get_first(void);
void menu(void);
float get_float(void);
void clean_buffer(void);

int main(void)
{
	char choice;
	float fnum, snum, total;

	// �뢥�� ���� ��� �롮� ��䬥��᪮� ����樨
	menu();
	
	// ���� �㭪�� �⡮� �����⨬�� ���祭��
	while ( (choice = get_choice()) != 'k' )
	{
		// ���� ����� ��� �᫠ float
		printf("������ ��ࢮ� �᫮: ");
		fnum = get_float();
		printf("������ ��஥ �᫮: ");
		while ( (snum = get_float()) == 0 && choice == 'd' )
		{	
			printf("������ �᫮, �⫨筮� �� 0: ");
			continue;
		}
		// �믮����� ������
		switch (choice)
		{
			case 's':
				total = fnum + snum;
				printf("%g + %g = %g\n", fnum, snum, total);
				break;
			case 'v':
				total = fnum - snum;
				printf("%g - %g = %g\n", fnum, snum, total);
				break;
			case 'd':
				total = fnum / snum;
				printf("%g / %g = %g\n", fnum, snum, total);
				break;
			case 'u':
				total = fnum * snum;
				printf("%g * %g = %g\n", fnum, snum, total);
				break;
			default:
				printf("������ �訡��� ᨬ���!\n");
				break;
		}
		
		menu();
	}
	printf("�ணࠬ�� �����襭�.\n");	

	return 0;
}

char get_choice(void)
{
	char ch;
	
	ch = get_first();
	while (ch != 's' && ch != 'v' && ch != 'u' && ch != 'd' && ch != 'k') 
	{
		printf("\n������� ����୮� ���祭�� !\n\n");
		menu();
		ch = get_first();
	}	
		
	return ch;
}

char get_first(void)
{
	char ch;
	
	ch = getchar();
	clean_buffer();
	
	return ch;
}

void menu(void)
{
	printf("�롥�� �������� ������:\n");
	printf("s. ᫮�����\tv. ���⠭��\n");
	printf("u. 㬭������\td. �������\n");
	printf("k. ��室 �� �ணࠬ��\n");
}

float get_float(void)
{
	float f;
	char ch;
	
	while ( scanf("%f", &f) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		
		printf(" �� ���� �᫮�.\n");
		printf("��������, ������ �᫮, ⠪�� ��� 2.5, -1.78�8 ��� 3: ");		
	}	
	
	clean_buffer();
	
	return f;	
}

void clean_buffer(void)
{
	while (getchar() != '\n')
			continue;
}




