// colddays.c - ������ ��業� ��砥�, �����
// ⥬������ ���᪠���� ���� ���
#include <stdio.h>
int main(void)
{
	const int FREEZING = 0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;
	
	printf("������ ᯨ᮪ ������� ⥬������.\n");
	printf("�ᯮ���� 誠�� ������; ��� �����襭�� ������ q.\n");
	while(scanf("%f", &temperature) == 1)
	{
		all_days++;
		if(temperature < FREEZING)
			cold_days++;		
	}
	if(all_days != 0)
		printf("%d - ��饥 ������⢮ ����: %.1f%% � ⥬�����ன ���� ���.\n",
				all_days, 100.0 * (float)cold_days / all_days);
	if(all_days == 0)
		printf("����� �� �������!\n");
	
	return 0;
}