// praise2 - 
#include <stdio.h>
#include <string.h>
#define PRAISE "Какое прекрасное имя!"
int main(void)
{
	char name[40];
	printf("Как вас зовут?\n");
	if (scanf("%s", name) != 1);
	printf("Здравствуйте, %s. %s\n", name, PRAISE);
	printf("Ваше имя состоит из %zd символов и занимает %lu ячеек памяти.\n",
			strlen(name), sizeof name);
	printf("Хвалебная фраза состоит из %zd символов ", strlen(PRAISE));
	printf("и занимает %lu ячеек памяти.\n", sizeof PRAISE);

	return 0;
}