// Fibonacci()
#include <stdio.h>

long fibonacci(int count);

int main(void)
{
	int count;
	
	printf("������ ������⢮ �ᥫ ��᫥����⥫쭮�� ��������: ");
	scanf("%d", &count);
	fibonacci(count);
	
	return 0;
}

long fibonacci(int count)
{
	long prev = 1, cur = 1, fib;
	int i;
	
	printf("��᫥����⥫쭮��� ��������: %ld %ld ", prev, cur);
	for(i = 2; i < count; i++)
	{		
		fib = prev + cur;		
		printf("%ld ", fib);
		prev = cur;
		cur = fib;
	}
}
