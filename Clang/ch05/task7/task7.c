// task7.c - ���⠥� �� �᫠
#include <stdio.h>
void cube(float f);
int main(void)
{
	float f;
	printf("������ �᫮ � ������饩 ����⮩: ");
	scanf("%f", &f);
	
	cube(f);
	
	return 0;
}

void cube(float f)
{
	printf("�� �᫠ %f ࠢ�� %f\n", f, f*f*f);
}