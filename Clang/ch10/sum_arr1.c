// sum_arr1.c -- �㬬� ����⮢ ���ᨢ�
#include <stdio.h>
#define SIZE 10

int sum(int ar[], int n);

int main(void)
{
	int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
	long answer;
	
	answer = sum(marbles, SIZE);
	printf("���� �㬬� ����⮢ ���ᨢ� marbles ࠢ�� %ld.\n", answer);
	printf("��ꥬ �����, �⢥������ ��� ���ᨢ marbles, ��⠢��� %zd ����.\n", sizeof marbles);
	
	return 0;
}

int sum(int ar[], int n)
{
	int i;
	int total = 0;
	
	for(i = 0; i < n; i++)
		total += ar[i];
	printf("������ ��६����� ar ��⠢��� %zd ����.\n", sizeof ar);
	
	return total;
}