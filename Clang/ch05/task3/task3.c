// task3.c - ��ॢ���� ��� � ������ � ���
#include <stdio.h>
int main(void)
{
	int days, week, day;
	const int DAYS_IN_WEEK = 7;
	
	printf("������ ������⢮ ���� ��� 0 ��� ��室�\n");
	scanf("%d", &days);
	while(days > 0)
	{
		week = days / DAYS_IN_WEEK;
		day = days % DAYS_IN_WEEK;
		printf("%d ���� ��⠢���� %d ������ %d ����\n", days, week, day);
		printf("������ ������⢮ ���� ��� 0 ��� ��室�\n");
		scanf("%d", &days);
	}
	
	return 0;
}