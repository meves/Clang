// hello.c -- �८�ࠧ�� ��㬥�� ��������� ��ப� � �᫮
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, times;
	
	if (argc < 2 || (times = atoi(argv[1])) < 1)
		printf("�ᯮ�짮�����: %s ������⥫쭮� �᫮\n", argv[0]);
	else
		for (i = 0; i < times; i++)
			puts("�ᥣ� ��襣�!");
	
	return 0;
}