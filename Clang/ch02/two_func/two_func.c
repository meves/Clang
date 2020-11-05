// two_func.c - программа, использующая две функции в одном файле
#include <stdio.h>

void butler(void);

int main(void)
{
	printf("Я вызываю дворецкого.\n");
	butler();
	printf("Да. Принестие мне чай и записываемые компакт-диски.\n");

	return 0;
}