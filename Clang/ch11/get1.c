// get1.c -- ����� ᠬ���᭠� �㭪�� �����,
//����� ������뢠�� ������⢮ ��������� ᨬ�����
#include <stdio.h>
#define SIZE 26

int get1(char string[], int);

int main(void)
{
	char str[SIZE];
	int c;
	
	printf("������ ��ப� �� ����� 25 ᨬ�����:\n");
	c = get1(str, SIZE);
	printf("��ப�: '%s' ����� ����� %d ᨬ�����.\n", str, c);
	
	return 0;
}

int get1(char string[], int len)
{
	int count;
	int ch;
	
	for (count = 0; count < len-1 && ((ch = getchar()) != '\n'); count++)
	{
		string[count] = ch;
	}
	string[count] = '\0';	
	
	return count;	
}
