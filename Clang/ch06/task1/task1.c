// task1.c - ���ᨢ �� 26 �㪢
#include <stdio.h>
#define SIZE 26
int main(void)
{
	// ᮧ���� ���ᨢ �� 26 ����⮢ char
	char letters[SIZE];
	char ch;
	int index;
	
	// �������� 26 �㪢 ������� ॣ����
	for(ch = 'a', index = 0; index < SIZE; ch++, index++)
		letters[index] = ch;
	
	// �뢥�� ᮤ�ন��� ���ᨢ�
	for(index = 0; index < SIZE; index++)
		printf("%c ", letters[index]);
	
	return 0;
}