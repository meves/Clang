// task5 - запрашивает имя и фамилию пользователя
// выводит их в одной строке и количество символов
// в другой строке
#include <stdio.h>
#include <string.h>
#define SF 20
#define SL 40
int main(void)
{
	char fname[SF];
	char lname[SL];
	int lenfn, lenln;

	// Ввести имя и фамилию
	printf("Введите ваше имя: ");
	scanf("%s", fname);
	printf("Введите вашу фамилию: ");
	scanf("%s", lname);

	// Вычислить длины имени и фамилии
	lenfn = strlen(fname);
	lenln = strlen(lname);

	printf("%s %s\n%*d %*d\n", fname, lname, lenfn, lenfn, lenln, lenln);
	printf("%s %s\n%-*d %-*d\n", fname, lname, lenfn, lenfn, lenln, lenln);

	return 0;
}