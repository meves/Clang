// loccheck.c - �஢�ઠ � 楫�� ���᭥���, ��� �࠭���� ��६����
#include <stdio.h>
void mikado(int);
int main(void)
{
	int pooh = 2, bah = 5;
	
	printf("� �㭪樨 main() pooh = %d � &pooh = %p\n", pooh, &pooh);
	printf("� �㭪樨 main() bah = %d � &bah = %p\n", bah, &bah);
	
	mikado(pooh);
	
	return 0;
}

void mikado(int bah)
{
	int pooh = 10;
	
	printf("� �㭪樨 mikado() pooh = %d � &pooh = %p\n", pooh, &pooh);
	printf("� �㭪樨 mikado() bah = %d � &bah = %p\n", bah, &bah);	
}