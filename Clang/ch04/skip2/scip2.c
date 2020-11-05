// skip2.c - игнорирут первые два целых числа из потока ввода 
#include <stdio.h>
int main(void)
{
	int n;
	/*
	printf("Введите три целых числа:\n");
	scanf("%*d %*d %d", &n);
	printf("Последним целым числом было %d\n", n);
	*/
	printf("scanf returned %d\n", scanf("%d", &n));
	
	return 0;
}