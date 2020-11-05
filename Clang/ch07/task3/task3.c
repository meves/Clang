// task3.c - программа чтения целых чисел
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	int n;
	int countEven, countOdd, count;
	int sumEven, sumOdd;
	
	countEven = countOdd = 0;
	sumEven = sumOdd = 0;
	printf("Введите целое число или 0 для выхода из программы: ");	
	while (true)
	{
		scanf("%d", &n);
		if (n == 0)
			break;
		if (n % 2 == 0) {
			++countEven;
			sumEven += n;
		}	
		else {
			++countOdd;
			sumOdd += n;
		}
		++count;
		printf("Введите целое число или 0 для выхода из программы: ");	
	}
	if (n != 0)
		printf("Количество четных чисел = %d, среднее значение четных чисел = %.2f.\n"
		   "Количество нечетных чисел = %d, среднее значение нечетных чисел = %.2f.\n", 
			countEven, (float)sumEven / countEven, countOdd, (float)sumOdd / countOdd);
	else
		printf("Не введено ни одного значения\n");
	
	return 0;
}
