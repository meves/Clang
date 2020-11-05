// prtval.c - обнаружение возвращаемого значения printf()
#include <stdio.h>
int main(void)
{
	int bph2o = 212;
	int rv;
	
	rv = printf("%d градусов по Фарегейту соответствует точке кипения"
				" воды.\n", bph2o);
	printf("Функция printf() выводит %d символов.\n", rv);			
	
	return 0;
}