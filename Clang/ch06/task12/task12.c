// task12.c - ᮧ���� � �뢮��� ���� ��ᥬ� �⥯���� �᫠ 2
#include <stdio.h>
#include <math.h>
#define NUM 2
#define SIZE 8
int main(void)
{
	// ᮧ���� ���쬨������ ���ᨢ ⨯� int
	int numbers[SIZE];
	int index;
	
	// �������� � ���� ���� ��ᥬ� �⥯���� �᫠ 2
	for(index = 0; index < SIZE; index++)
		numbers[index] = pow(NUM, index);
	
	// �뢥�� ���祭�� �� �����
	index = 0;
	do
	{
		printf("numbers[%d] = %d\n", index, numbers[index]);
		
	} while(++index < SIZE);
	
	return 0;
}