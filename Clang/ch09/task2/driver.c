#include <stdio.h>

void chline(char ch, int, int j);

int main(void)
{
	char ch;
	int i, j;
	
	printf("������ ᨬ��� � ��� 楫�� �᫠: ");
	scanf("%c %d %d", &ch, &i, &j);
	
	chline(ch, i, j);
	
	return 0;
}