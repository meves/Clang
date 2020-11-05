// task8.c - выполняет арифметические операции
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

	// вывести меню для выбора арифметической операции
	menu();
	
	// пока функция отбора допустимых значений
	while ( (choice = get_choice()) != 'k' )
	{
		// пока ввести два числа float
		printf("Введите первое число: ");
		fnum = get_float();
		printf("Введите второе число: ");
		while ( (snum = get_float()) == 0 && choice == 'd' )
		{	
			printf("Введите число, отличное от 0: ");
			continue;
		}
		// выполнить операцию
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
				printf("Введен ошибочный символ!\n");
				break;
		}
		
		menu();
	}
	printf("Программа завершена.\n");	

	return 0;
}

char get_choice(void)
{
	char ch;
	
	ch = get_first();
	while (ch != 's' && ch != 'v' && ch != 'u' && ch != 'd' && ch != 'k') 
	{
		printf("\nВведено неверное значение !\n\n");
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
	printf("Выберите желаемую операцию:\n");
	printf("s. сложение\tv. вычитание\n");
	printf("u. умножение\td. деление\n");
	printf("k. выход из программы\n");
}

float get_float(void)
{
	float f;
	char ch;
	
	while ( scanf("%f", &f) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		
		printf(" не является числом.\n");
		printf("Пожалуйста, введите число, такое как 2.5, -1.78Е8 или 3: ");		
	}	
	
	clean_buffer();
	
	return f;	
}

void clean_buffer(void)
{
	while (getchar() != '\n')
			continue;
}




