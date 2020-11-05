// task6.c - отображает количество молекул воды в квартах
#include <stdio.h>
#define KWRT 950
#define MOLECULE 3.0E-23
int main(void)
{
	float kwrts, mw;
	double mols;
	
	// ввести объем воды в квартах
	printf("Enter volume of water in kwartas: ");
	scanf("%f", &kwrts);
	
	// масса воды в квартах
	mw = kwrts * KWRT;
	
	// количество молекул
	mols = mw / MOLECULE;
	
	printf("Number of molecules in this kwartas = %e\n", mols);
	
	return 0;
}