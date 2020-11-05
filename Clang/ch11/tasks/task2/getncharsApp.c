// драйвер для проверки функции getnchars
#include <stdio.h>
#include "getnchars.h"
#define BUF 4096	// размер массива для приема символов
int main(void)
{
	char rec[BUF];		// приемник символов со устройства ввода
	int count = 0;		// счетчик вызовов 
	unsigned size;	
	
	puts("Введите количество символов для считывания.");
	scanf("%ud", &size);
	puts("Введите строку не более 4096 символов:");
	
	getnchars(rec, size);
	puts("Содержимое приемника:");
	puts(rec);
	
	return 0;
}