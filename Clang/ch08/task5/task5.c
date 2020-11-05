// task5.c - 
#include <stdio.h>
int main(void)
{
	int guess = 50;
	int low, high;
	char response;
	
	low = 1;
	high = 100;
	printf ("Загадайте целое число в промежутке от 1 до 100. Я попробую отгадать его.\n"
			"Нажмите клавишу y, если моя догадка верна;\n"
			"Нажмите клавишу m если загаданное число больше;\n"
			"Нажмите клавишу l если загаданное число меньше.\n"
			"Вашим числом является %d ?\n", guess);
	while ((response = getchar()) != 'y')
	{
		if (response == 'm')
		{
			low = guess + 1;
			guess = (low + high) / 2;		
			printf("Вашим числом является %d ?\n", guess);
		}
		else if (response == 'l')
		{
			high = guess - 1; 
			guess = (low + high) / 2;
			printf("Вашим числом является %d ?\n", guess);
		}	
		else
		{
			printf("К сожалению, я понимаю только y, m или l.\n");
			// printf("Вашим числом является %d ?\n", guess);
		}	
		while (getchar() != '\n')
			continue;	
	}	
	printf("Я знал, что у меня получится!\n"
			"Ваше число %d\n", guess);
	
	return 0;
}