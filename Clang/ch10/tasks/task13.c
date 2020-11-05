#include <stdio.h>
#define ROWS 3
#define COLS 5

double get_double();
void fill_array(int rs, int cs, double ar[rs][cs]);
void show_array(int rs, int cs, double ar[rs][cs]);
double count_average_row(int rs, int cs, double ar[rs][cs]);
double count_average_total(int rs, int cs, double ar[rs][cs]);
double get_max_value(int rs, int cs, double ar[rs][cs]);

int main(void)
{
	double arr[ROWS][COLS];
	double average_row, average_total, max_value;
	int i;
		
	// �।������ ����� �� ����� �ᥫ ⨯� double
	printf("������ �� ����� ����⢥���� �ᥫ\n");
	
	// ��������� � ���ᨢ� ࠧ��୮���� 3x5
	fill_array(ROWS, COLS, arr);
	
	// �������� ���ᨢ
	show_array(ROWS, COLS, arr);
	
	// ���᫨�� �।��� ���祭�� ������� �����
	for(i = 0; i < ROWS; i++)
	{
		average_row = count_average_row(ROWS, COLS, arr+i);
		printf("�।��� ���祭�� ����⮢ ����� %d = %g\n", i+1, average_row);
	}
	
	// ���᫨�� �।��� ���祭�� ��� �ᥫ
	average_total = count_average_total(ROWS, COLS, arr);
	printf("�।��� ���祭�� ��� ����⮢ ���ᨢ� = %g\n", average_total);
	
	// ��।����� �������襥 �� 15 ���祭��
	max_value = get_max_value(ROWS, COLS, arr);
	printf("���ᨬ��쭮� ���祭�� ����⮢ ���ᨢ� = %g\n", max_value);
	
	return 0;
}

double get_double()
{
	double input;
	char ch;

	while( scanf("%lf", &input) != 1)
	{
		while((ch = getchar()) != '\n')
			putchar(ch);
		printf(" �� ���� �᫮�.\n��������, ������ �᫮: " );
	}
	while(getchar() != '\n')
		continue;	
	return input;
}

void fill_array(int rows, int cols, double ar[rows][cols])
{
	int i, j;
	
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < cols; j++)
		{
			printf("������ %d-� �᫮ ����� %d: \n", j+1, i+1);
			ar[i][j] = get_double();
		}
	}
}

void show_array(int rows, int cols, double ar[rows][cols])
{
	int i, j;
	
	for(i = 0; i < rows; i++)
	{
		printf("row %d: ", i);
		for(j = 0; j < cols; j++)
		{
			printf("%g ", ar[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

double count_average_row(int rows, int cols, double ar[rows][cols])
{
	int i;
	double total;
	
	total = 0.0;	
	for(i = 0; i < rows; i++)
	{
		total += *(*ar + i);
	}
	
	return (total / rows);
}

double count_average_total(int rows, int cols, double ar[rows][cols])
{
	int i, j;
	double total;
	
	total = 0.0;
	for(i = 0; i < rows; i++)
		for(j = 0; j < cols; j++)
			total += ar[i][j];
	
	return (total / (rows * cols));
}

double get_max_value(int rows, int cols, double ar[rows][cols])
{
	int i, j;
	double max;
	
	max = ar[0][0];
	for(i = 0; i < rows; i++)
		for(j = 0; j < cols; j++)
			if(ar[i][j] > max)
				max = ar[i][j];
	
	return max;
}