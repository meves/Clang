// драйвер для проверки функции getnchars
#include <stdio.h>
#include "getnchars.h"
#define BUF 4096	// размер массива для приема символов
int main(void)
{
	char rec[BUF];		// приемник символов со устройства ввода
	char * pcur;		// указатель на промежуточный приемный буфер
	int count = 0;		// счетчик вызовов 
	unsigned size;	
	
	puts("Введите количество символов для считывания.");
	scanf("%ud", &size);
	puts("Введите строку не более 4096 символов ('>' для выхода):");
	
	pcur = rec;	// нацеливаем указатель на начало приемника	
	while ((pcur = getnchars(pcur, size)) != NULL)
		count++;
					
	printf("Функция getnchars была вызвана %d раз\n", count);
	puts("Содержимое приемника:");
	puts(rec);
	
	return 0;
}