// task7.c - �뢮��� ��� � ���
#include <stdio.h>
#define INCH 2.54
int main(void)
{
	int sm;
	float height;
	
	printf("Enter your height in sm: ");
	scanf("%d", &sm);
	height = sm / INCH;
	printf("Your height in inches = %f", height);
	
	return 0;
}