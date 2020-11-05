// checking.c - �஢�ઠ �����⨬��� �����
#include <stdio.h>
#include <stdbool.h>
// �஢�ઠ, ���� �� �������� ���祭�� 楫� �᫮�
int get_int(void);
// �஢�ઠ, ����� �� �࠭��� ��������� �����⨬묨
 bool bad_limits(int begin, int end, int low, int high);
// ���᫥��� �㬬� �����⮢ 楫�� �ᥫ
// �� a �� b
double sum_squares(int a, int b);
int main(void)
{
	const int MIN = -1000;		// ������ �࠭�� ���������
	const int MAX = 1000;		// ������ �࠭�� ���������
	int start;					// ��砫� ���������
	int stop;					// ����� ���������
	double answer;
	
	printf("�� �ணࠬ�� ������ �㬬� �����⮢ "
			"楫�� �ᥫ � �������� ���������.\n������ �࠭�� �� ������ "
			"���� ����� -1000, \n� ������ - "
			"����� +1000.\n������ ���祭�� �࠭�� ��������� (������ 0 ��� "
			"����� �࠭�� ��� �����襭�� �ணࠬ��):\n������ �࠭��: ");
	start = get_int();
	printf("������ �࠭��: ");
	stop = get_int();
	while (start != 0 || stop != 0)
	{
		if (bad_limits(start, stop, MIN, MAX))
			printf("��������, ������ ������.\n");
		else
		{
			answer = sum_squares(start, stop);
			printf("�㬬� �����⮢ 楫�� �ᥫ ");
			printf("�� %d �� %d ࠢ�� %g\n", start, stop, answer);
		}
		printf("������ ���祭�� �࠭�� ��������� (������ 0 ��� "
				"����� �࠭�� ��� �����襭�� �ணࠬ��):\n");
		printf("������ �࠭��: ");	
		start = get_int();
		printf("������ �࠭��: ");
		stop = get_int();	
	}
	printf("�ணࠬ�� �����襭�.\n");	
	return 0;
}

int get_int(void)
{
	int input;
	char ch;
	
	while (scanf("%d", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);						// 㤠����� ���ࠢ����� �室��� ������
		printf(" �� ���� 楫��᫥���.\n�������� ������ ");
		printf("楫�� �᫮, ⠪�� ��� 25, -178 ��� 3: ");
	}
	return input;
}

double sum_squares(int a, int b)
{
	double total = 0;
	int i;
	for (i = a; i <= b; i++)
		total += i * i;
	return total;
}

bool bad_limits(int begin, int end, int low, int high)
{
	bool not_good = false;
	if (begin > end)
	{
		printf("%d �� ����� %d.\n", begin, end);
		not_good = true;
	}
	if (begin < low || end < low)
	{
		printf("���祭�� ������ ���� ࠢ�묨 %d ��� �����.\n", low);
		not_good = true;
	}	
	if (begin > high || end > high)
	{
		printf("���祭�� ������ ���� ࠢ�묨 %d ��� �����.\n", high);
		not_good = true;
	}
	return not_good;
}


















