// put2.c -- �㭪�� puts � ���稪��
#include <stdio.h>

int put2(const char *);

int main(void)
{
	const char * str = "�� ��ப� ��� �뢮�� �� �࠭ �\
 ������ ᨨ�����";
	int c;
	
	c = put2(str);
	
	printf("��ப� ᮤ�ন� %d ᨬ�����\n", c);
	
	return 0;
}

int put2(const char * string)
{
	int count = 0;
	
	while (*string)
	{
		putchar(*string++);
		count++;
	}
	putchar('\n');
	
	return count;
}
