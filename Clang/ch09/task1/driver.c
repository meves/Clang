#include <stdio.h>

double min(double first, double second);

int main(void)
{
	double first, second;
	
	printf("������ ��� �᫠: ");
	scanf("%lf %lf", &first, &second);
	
	printf("�������쭮� ���祭�� �� %g � %g = %g\n", 
			first, second, min(first, second));
		
	return 0;
}