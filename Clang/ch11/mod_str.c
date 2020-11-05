// mod_str.c -- ��������� ��ப�
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LIMIT 80

void ToUpper(char *);
int PunctCount(const char *);

int main(void)
{
	char line[LIMIT];
	
	puts("������ ��ப�:");
	gets(line);
	ToUpper(line);
	puts(line);
	printf("�� ��ப� ᮤ�ন� %d ������ �९������.\n", PunctCount(line));
	
	return 0;
}

void ToUpper(char *str)
{
	while (*str)
	{
		*str = toupper(*str);
		str++;
	}
}

int PunctCount(const char *str)
{
	int ct = 0;
	
	while (*str)
	{
		if (ispunct(*str))
			ct++;
		str++;
	}
	return ct;
}