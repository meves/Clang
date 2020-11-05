// val.c - печатает максимальные и минимальные значения различных типов
#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void)
{
	printf("Размеры целых типов:\n");
	printf("CHAR_MIN = %d, CHAR_MAX = %d, UCHAR_MAX = %u\n", CHAR_MIN, CHAR_MAX, UCHAR_MAX);
	printf("SHRT_MIN = %hd, SHRT_MAX = %hd, USHRT_MAX = %hu\n", SHRT_MIN, SHRT_MAX, USHRT_MAX);
	printf("INT_MIN = %d, INT_MAX = %d, UINT_MAX = %u\n", INT_MIN, INT_MAX, UINT_MAX);
	printf("LONG_MIN = %ld, LONG_MAX = %ld, ULONG_MAX = %lu\n", LONG_MIN, LONG_MAX, ULONG_MAX);
	printf("lLONG_MIN = %lld, lLONG_MAX = %lld, UlLONG_MAX = %llu\n", LLONG_MIN, LLONG_MAX, ULLONG_MAX);

	printf("Размеры типов с плавающей точкой:\n");
	printf("FLT_MIN = %e, FLT_MAX = %e\n", FLT_MIN, FLT_MAX);
	printf("DBL_MIN = %e, DBL_MAX = %e\n", DBL_MIN, DBL_MAX);
	printf("LDBL_MIN = %Le, LDBL_MAX = %Le\n", LDBL_MIN, LDBL_MAX);

	return 0;
} 