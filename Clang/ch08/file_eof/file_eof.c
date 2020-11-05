// file_eof.c - открытие файла без перенаправления
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ch;
	FILE *fp;
	char fname[50];
	
	printf("Введите имя файла: ");
	scanf("%s", fname);
	fp = fopen(fname, "r");
	if (fp == NULL)
	{
		printf("Не удается открыть файл. Программа завершена.\n");
		exit(1);
	}
	while ((ch = getc(fp)) != EOF)
		putchar(ch);
	fclose(fp);
	
	return 0;
}