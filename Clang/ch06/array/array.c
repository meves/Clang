// array.c - заполнение элементов массива ползовательскими данными
#include <stdio.h>
int main(void)
{
	int array[10];
	int i;
	
	printf("Заполните элементы массива: ");
	for(i=0; i<10; i++)
		scanf("%d", &array[i]);
		
	for(i=0; i<10; i++)
		printf("array[%d] = %d\n", i, array[i]);
	
	return 0;
}