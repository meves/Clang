// task5.c - ������⥫쭮� ᫮�����
#include <stdio.h>
int main(void)
{
	int count, sum, limit;
	
	count = 0;
	sum = 0;
	printf("������ ���祭�� ��ண� ���᫥���\n");
	scanf("%d", &limit);
	while(count++ < limit)
	{
		sum = sum + count;
	}
	printf("sum = %d\n", sum);
	
	return 0;
}