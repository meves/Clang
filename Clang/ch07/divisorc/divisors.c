// divisors.c - �������� ������� if �⮡ࠦ��� �� �࠭�
// ����⥫� ��������� �᫠
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	unsigned long num;
	unsigned long div;
	bool isPrime;
	
	printf("������ 楫�� �᫮ ��� �������: ");
	printf("��� �����襭�� ������ q.\n");
	while(scanf("%lu", &num) == 1)
	{
		for(div = 2, isPrime = true; (div * div) <= num; div++)
		{
			if(num % div == 0)
			{
				if((div * div) != num)
					printf("%lu ������� �� %lu � %lu.\n", num, div, num / div);
				else
					printf("%lu ������� �� %lu.\n", num, div);
				isPrime = false;
			}
		}
		if(isPrime)
			printf("%lu ���� ����� �᫮�.\n", num);
		printf("������ ᫥���饥 楫�� �᫮ ��� �������: ");
		printf("��� �����襭�� ������ q.\n");
	}
	printf("�ᥣ� ��襣�.\n");
	
	return 0;
}