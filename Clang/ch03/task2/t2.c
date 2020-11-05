/* t2.c - приглашает ввести значение в коде ASCII
		и выводит его симовльное представление
*/
#include <stdio.h>
int main(void)
{
	int ch;

	printf("Введите код ASCII любого символа: ___\b\b\b");
	while (scanf("%d", &ch) != 1)
	{
		printf("Значение должно быть в диапазоне 0 до 127\n");
		printf("Введите код ASCII любого символа: ___\b\b\b");
		while (getchar() != '\n');
	}
	printf("Вы ввели код символа %c\n", ch);

	return 0;
}
