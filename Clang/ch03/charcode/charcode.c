// charcode.c - �⮡ࠦ��� ������� ���祭�� ᨬ����
#include <stdio.h>
#include <inttypes.h>
int main(void)
{
	
	signed char ch, num = -1;
	unsigned char num2 = num;
	_Bool bool = 1;
	int16_t n = 32768;
	uint32_t nn = 5000000000;
	
	printf("B�e���e �����-����� ᨬ���.\n");
	scanf("%c", &ch);
	printf("��� ᨬ���� %c ࠢ�� %d.\n", ch, ch);
	printf("num = %c\t%d\n", num, num);
	printf("num2 = %c\t%d\n", num2, num2);
	if(bool){
		printf("bool = %d\n", bool);
		printf("n = %d\tnn = %d\n", n, nn);
	}
	
	return 0;
}