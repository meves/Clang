// menuette.c - �孮����� ����
#include <stdio.h>
char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);
int main(void)
{
	int choice;
	while ( (choice = get_choice()) != 'v' )
	{
		switch (choice)
		{
			case 's':	printf("���㯠�� ��襢�, �த����� ��ண�.\n");
				break;
			case 'z':	putchar('\a');
				break;
			case 'p':	count();
				break;
			default:	printf("�ணࠬ���� �訡��!\n");
				break;
		}		
	}
	printf("�ᥣ� ��襣�.\n");
	return 0;
}

void count(void)
{
	int n, i;
	
	printf("����� �� ������ �।���? ������ 楫�� �᫮:\n");
	n = get_int();
	for (i = 1; i <= n; i++)
		printf("%d\n", i);
	while (getchar() != '\n')
		continue;
}

char get_choice(void)
{
	int ch;
	
	printf("������ �㪢� ��࠭���� ��ਠ��:\n");
	printf("s. ᮢ��		z.������\n");
	printf("p. ������		v.��室\n");
	ch = get_first();
	while ( ch != 's' && ch != 'z' && ch != 'p' && ch != 'v')
	{
		printf("�롥�� s, z, p ��� v.\n");
		ch = get_first();
	}
	return ch;
}

char get_first(void)
{
	int ch;
	
	ch = getchar();
	while (getchar() != '\n')
		continue;
	return ch;
}

int get_int(void)
{
	int input;
	char ch;
	
	while (scanf("%d", &input) != 1)
	{
		while ( (ch = getchar()) != '\n')
			putchar(ch);
		printf(" �� ���� 楫��᫥���.\n�������� ������ ");
		printf("楫�� �᫮, ⠪�� ��� 25, -178 ��� 3: ");
	}
	return input;
}

