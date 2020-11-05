// task1.c - примеры переполнения с целыми и вещественными числами и потери значимости
#include <stdio.h>
#include <float.h>
int main(void)
{
	// переполнение целочисленных типов
	unsigned char uch = 255;
	signed char ch = 127;
	unsigned short ush = 65535;
	signed short sh = 32767;
	unsigned int ui = 4294967295;
	signed int i = 2147483647;
	unsigned long ul = 4294967295;
	signed long l = 2147483647;
	
	uch++;
	ch++;
	ush++;
	sh++;
	ui++;
	i++;
	ul++;
	l++;
	
	printf("uch = %u\tch = %d\tush = %u\tsh = %hd\tui = %u\ti = %d\tul = %u\tl = %ld\n", uch, ch, ush, sh, ui, i, ul, l);
	
	// переполнение вещественных типов
	float f = 3.4E38f;
	double d = 1.7E308;
	long double ld = 1.1E4932L;
	
	f *= 100;
	d *= 100;
	ld *= ld;
	printf("f = %f\td = %f\tld = %Lf\n", f, d, ld);
	
	// потеря значимости
	printf("FLT_MIN = %f\tDBL_MIN = %f\tLDBL_MIN = %Lf\n", FLT_MIN/2, DBL_MIN/2, LDBL_MIN/2);
	
	
	return 0;
}