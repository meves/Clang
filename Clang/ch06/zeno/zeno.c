// zeno.c - �㬬� ��᫥����⥫쭮��
#include <stdio.h>
int main(void)
{
	int t_ct;
	double time, x;
	int limit;
	
	printf("������ ����室���� ������⢮ ����⮢ ��᫥����⥫쭮��: ");
	scanf("%d", &limit);
	for(time=0.0, x = 1.0, t_ct = 1; t_ct <= limit; t_ct++, x *= 2.0)
	{
		time += 1.0/x;
		printf("�६� = %f, ����� ������⢮ ����⮢ = %d\n", time, t_ct);
	}
	
	return 0;
}