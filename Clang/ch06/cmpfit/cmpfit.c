// cmpfit.c - �ࠢ����� �ᥫ � ������饩 ����⮩
#include <stdio.h>
#include <math.h>
int main(void)
{
	const double ANSWER = 3.14159;
	double response;
	
	printf("������ ���祭�� �᫠ pi?\n");
	scanf("%lf", &response);
	while(fabs(response-ANSWER) > 0.0001)
	{
		printf("������ ���祭�� ����୮\n");
		scanf("%lf", &response);
	}
	printf("�ॡ㥬�� �筮��� ���⨣���!\n");
	
	return 0;
}