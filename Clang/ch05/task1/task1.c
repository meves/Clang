// task.1 - ��ॢ�� ����� � ��� � ������
#include <stdio.h>
#define MIN_PER_HOUR 60
int main(void)
{
	int time, min, hour;
	
	printf("������ �६� � ������ ��� 0 ��� ��室�\n");
	scanf("%d", &time);
	while(time > 0){
		hour = time / MIN_PER_HOUR;
		min = time % MIN_PER_HOUR;
		printf("%d ����� - %d �ᮢ � %d �����\n", time, hour, min);	
		printf("������ �६� � ������ ��� 0 ��� ��室�\n");
		scanf("%d", &time);
	}
	
	return 0;
}