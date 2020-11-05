// skippart.c - �ᯮ��� ������ continue, �⮡� �ய����� ���� 横��
#include <stdio.h>
int main(void)
{
	const float MIN = 0.0f;
	const float MAX = 100.0f;
	float score;
	float total = 0.0f;
	int n = 0;
	float min = MAX;
	float max = MIN;
	
	printf("������ १���� ��ࢮ� ���� (��� q ��� �����襭��): ");
	while (scanf("%f", &score) == 1)
	{
		if (score < MIN || score > MAX)
		{
			printf("%0.1f - �������⨬�� ���祭��. ������ ������: ", score);
			continue;
		}
		printf("���ਭ�� %0.1f:\n", score);
		min = (score < min) ? score : min;
		max = (score > max) ? score : max;
		total += score;
		n++;
		printf("������ १���� ᫥���饩 ���� (��� q ��� �����襭��): ");
	}
	if (n > 0)
	{
		printf("�।��� ���祭�� %d १���⮢ ࠢ�� %0.1f.\n", n, total / n);
		printf("�������쭮� = %0.1f, ���ᨬ��쭮� = %0.1f\n", min, max);
	}
	else
		printf("�����⨬� १����� ��� �� �������.\n");
	
	return 0;
}