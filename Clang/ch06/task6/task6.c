// task6.c - выводит слово в обратном порядке
#include <stdio.h>
#include <string.h>
int main(void)
{
	char word[30];
	int i;
	
	printf("Введите слово: ");
	scanf("%s", word);
	for(i = strlen(word)-1; i >= 0; i--)
		printf("%c", word[i]);
		
	return 0;
}