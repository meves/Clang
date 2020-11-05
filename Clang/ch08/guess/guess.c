// guess.c - неэффективное и ошибочное отгадывание числа
#include <stdio.h>
int main(void)
{
	int guess = 1;
	char response;
	
	printf ("Выберите целое число в промежутке от 1 до 100. Я попробую отгадать ");
	printf ("его.\nНажмите клавишу y, если моя догадка верна и ");
	printf ("\n клавишу n в противном случае.\n");
	printf ("Вашим числом является %d?\n", guess);
	while ((response = getchar()) != 'y')
	{
		if (response == 'n')
			printf("Вашим числом является %d?\n", ++guess);
		else
		{
			printf("К сожалению, я понимаю только y или n.\n");
			printf("Вашим числом является %d?\n", guess);
		}	
		while (getchar() != '\n')
			continue;	
	}	
	printf("Я знал, что у меня получится!\n");
	
	return 0;
}