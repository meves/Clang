// score_in.c - �ᯮ�짮����� 横��� ��� ��ࠡ�⪨ ���ᨢ��
#include <stdio.h>
#define SIZE 10
#define PAR 72
int main(void)
{
	int index, score[SIZE];
	int sum = 0;
	float average;
	
	printf("������ %d १���⮢ ���� � �����:\n", SIZE);
	for(index = 0; index < SIZE; index++)
		scanf("%d", &score[index]);
	
	printf("������� ᫥���騥 १�����:\n");
	for(index = 0; index < SIZE; index++)
		printf("%5d", score[index]);
	printf("\n");
	
	for(index = 0; index < SIZE; index++)
		sum += score[index];
	
	average = (float)sum / SIZE;
	
	printf("�����⥫쭠� �㬬� �窮� %d, �।��� ���祭�� %.2f\n",
			sum, average);
	printf("����祭�� �������� ࠢ�� %.0f\n", average - PAR);		
	
	return 0;
}