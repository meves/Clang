// showchar1.c - �ணࠬ�� � ����让 �஡�����, �易���� � ������-�뢮���
#include <stdio.h>
void display(char cr, int lines, int width);
int main(void)
{
	int ch;
	int rows, cols;
	
	printf("������ ᨬ��� � ��� 楫�� �᫠:\n");
	while((ch = getchar()) != '\n')
	{
		scanf("%d %d", &rows, &cols);
		display(ch, rows, cols);
		printf("������ �� ���� ᨬ��� � ��� 楫�� �᫠;\n");
		printf("������ ᨬ��� ����� ��ப� ��� �����襭�� �ணࠬ��.\n");		
	}
	printf("�ணࠬ�� �����襭�.\n");
	
	return 0;
}

void display(char cr, int lines, int width)
{
	int row, col;
	
	for (row = 1; row <= lines; row++)
	{
		for (col = 1; col <= width; col++)
			putchar(cr);
		putchar('\n');
	}	
}