// task6.c - �⮡ࠦ��� ������⢮ ������ ���� � ������
#include <stdio.h>
#define KWRT 950
#define MOLECULE 3.0E-23
int main(void)
{
	float kwrts, mw;
	double mols;
	
	// ����� ��ꥬ ���� � ������
	printf("Enter volume of water in kwartas: ");
	scanf("%f", &kwrts);
	
	// ���� ���� � ������
	mw = kwrts * KWRT;
	
	// ������⢮ ������
	mols = mw / MOLECULE;
	
	printf("Number of molecules in this kwartas = %e\n", mols);
	
	return 0;
}