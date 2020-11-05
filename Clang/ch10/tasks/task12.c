#include <stdio.h>
#define ROWS 3
#define COLS 5

double get_double();
void fill_array(double [][COLS], int);
void show_array(double [][COLS], int);
double count_average_row(double [][COLS], int);
double count_average_total(double [][COLS], int);
double get_max_value(double [][COLS], int);

int main(void)
{
	double arr[ROWS][COLS];
	double average_row, average_total, max_value;
	int i;
		
	// предложить ввести три набора чисел типа double
	printf("Введите три набора вещественных чисел\n");
	
	// запомнить в массиве размерностью 3x5
	fill_array(arr, ROWS);
	
	// показать массив
	show_array(arr, ROWS);
	
	// вычислить среднее значение каждого набора
	for(i = 0; i < ROWS; i++)
	{
		average_row = count_average_row(arr+i, COLS);
		printf("Среднее значение элементов набора %d = %g\n", i+1, average_row);
	}
	
	// вычислить среднее значение всех чисел
	average_total = count_average_total(arr, ROWS);
	printf("Среднее значение всех элементов массива = %g\n", average_total);
	
	// определить наибольшее из 15 значений
	max_value = get_max_value(arr, ROWS);
	printf("Максимальное значение элементов массива = %g\n", max_value);
	
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
		printf(" не является числом.\nПожалуйста, введите число: " );
	}
	while(getchar() != '\n')
		continue;	
	return input;
}

void fill_array(double ar[][COLS], int rows)
{
	int i, j;
	
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < COLS; j++)
		{
			printf("Введите %d-е число набора %d: \n", j+1, i+1);
			ar[i][j] = get_double();
		}
	}
}

void show_array(double ar[][COLS], int rows)
{
	int i, j;
	
	for(i = 0; i < rows; i++)
	{
		printf("row %d: ", i);
		for(j = 0; j < COLS; j++)
		{
			printf("%g ", ar[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

double count_average_row(double ar[][COLS], int len)
{
	int i;
	double total;
	
	total = 0.0;	
	for(i = 0; i < len; i++)
	{
		total += *(*ar + i);
	}
	
	return (total / len);
}

double count_average_total(double ar[][COLS], int rows)
{
	int i, j;
	double total;
	
	total = 0.0;
	for(i = 0; i < rows; i++)
		for(j = 0; j < COLS; j++)
			total += ar[i][j];
	
	return (total / (rows * COLS));
}

double get_max_value(double ar[][COLS], int rows)
{
	int i, j;
	double max;
	
	max = ar[0][0];
	for(i = 0; i < rows; i++)
		for(j = 0; j < COLS; j++)
			if(ar[i][j] > max)
				max = ar[i][j];
	
	return max;
}