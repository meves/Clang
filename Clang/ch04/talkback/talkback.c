// talkback.c - довольно настырная информативная программа
#include <stdio.h>
#include <string.h>
#define DENCITY 62.4
int main(void)
{
	float weight, volume;
	int size, letters;
	char name[40];

	printf("Здравствуйте! как вас зовут?\n");
	if (scanf("%s", name) != 1);
	printf("%s, сколько вы весите в фунтах?\n", name);
	if (scanf("%f", &weight) != 1);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENCITY;
	printf("Хорошо, %s, ваш объем составляет %2.2f кубических футов.\n", 
				name, volume);
	printf("К тому же ваше имя состоит из %d символов,\n", 
				letters);
	printf("и мы располагаем %d байтами для его сохранения.\n", 
				size);

	return 0;
}