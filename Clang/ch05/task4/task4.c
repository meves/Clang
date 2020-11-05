// task4.c - отображает ввысоту в сантиметрах, футах и дюймах
#include <stdio.h>
int main(void)
{
	double sm, ft, inch;
	const double FOOT = 30.48;
	const double INCH = 2.54;
	
	printf("Введите высоту в сантиметрах <=0 для выхода: ");
	scanf("%lf", &sm);
	while(sm > 0)
	{
		ft = sm / FOOT;
		inch = sm / INCH;
		printf("%.1f см = %.0f футов %.1f дюймов\n", sm, ft, inch);
		printf("Введите высоту в сантиметрах <=0 для выхода: ");
		scanf("%lf", &sm);	
	}
	printf("Работа завершена.\n");
	
	return 0;
}