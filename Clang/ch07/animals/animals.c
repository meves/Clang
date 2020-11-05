// animals.c - использование оператора switch
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	
	printf("Дайте мне букву алфавита и я укажу вам ");
	printf("название животного,\nначинающееся с этой буквы.\n");
	printf("Введите букву или # для завершения.\n");
	while ((ch = getchar()) != '#')
	{
		if (ch == '\n')
			continue;
		if (islower(ch))
			switch (ch)
			{
				case 'a':
					printf("арагли, дикий горный азиатский баран\n");
					break;
				case 'b':
					printf("бабируcса, дикая малайская свинья\n");
					break;
				case 'k':
					printf("коати, носуха обыкновенная\n");
					break;
				case 'v':
					printf("выхухоль, водоплавающее существо\n");
					break;
				case 'e':
					printf("ехидна, игольчатый муравьед\n");
					break;
				case 'r':
					printf("рыболов, светло-коричневая куница\n");
					break;
				default:
					printf("Это трудная задача!\n");
			}
		else
			printf("Распознаются только строчные буквы.\n");
		while (getchar() != '\n')
			continue;
		printf("Введите следующую букву или # для завершения.\n");
	}
	printf("Программа завершена.\n");
	
	return 0;
}