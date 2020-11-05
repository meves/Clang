/* t1.c - программа, демонстрирующая результаты переполнение целымх чисел,
		  а также переполнение и потерю значимости чисел с плавающей точкой	
задача 1 глава 3 учебник Стивен Прата "Язык программирования С. Лекции и упражнения"		  
автор - сергей Медведкин
дата 23.09.2020г.
*/
#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void)
{
	// целочисленные переменные
	char ch = CHAR_MAX;
	unsigned char uch = UCHAR_MAX;
	short sh = SHRT_MAX;
	unsigned short ush = USHRT_MAX;
	int n = INT_MAX;
	unsigned un = UINT_MAX;
	long ln = LONG_MAX;
	unsigned long uln = ULONG_MAX;
	long long lln = LLONG_MAX;
	unsigned long long ulln = ULLONG_MAX;
	// переменные с плавающей точкой
	float f = FLT_MAX;
	double d = DBL_MAX;
	long double ld = LDBL_MAX;

	printf("Переполнение целых чисел:\n");
	printf("char: %d; uchar: %u; short: %hd; ushort: %hu; int: %d; uint: %u; long: %ld; ulong: %lu; "
			"llong: %lld; ullong: %llu \n",	++ch, ++uch, ++sh, ++ush, ++n, ++un, ++ln, ++uln, ++lln, ++ulln);
	printf("Переполнение чисел с плавающей точкой\n");
	printf("float: %f; dluble: %f; long double: %Lf \n", f*100.0f, d*100.0, ld*100.0L);

	f = FLT_MIN;
	d = DBL_MIN;
	ld = LDBL_MIN;
	printf("Потеря значимости для чисел с плавающей точкой\n");
	printf("float: %f; double: %f; long double: %Lf \n", f/100.0f, d/100.0, ld/100.0L);

	return 0;
}