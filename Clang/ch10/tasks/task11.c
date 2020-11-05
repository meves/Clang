/* ������ �⮣��� ����� �� �����, �������� �।��� ���祭��
   � ��������� �।��� ���祭�� �ᠤ��� �� ��ਮ� � ��᪮�쪮 ���*/
#include <stdio.h>
#define MONHTS 12
#define YEARS 5

float print_rain_by_years(int rs, int cs, const float ar[rs][cs]);
void print_rain_by_months(int rs, int cs, const float ar[rs][cs]);

int main(void)
{
	const float rain[YEARS][MONHTS] = 
	{
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
	};
	float total;
	
	total = print_rain_by_years(YEARS, MONHTS, rain);
	
	printf("\n�।��������� ������⢮ �ᠤ��� ��⠢��� %.1f ���.\n\n",
			total/YEARS);
			
	print_rain_by_months(YEARS, MONHTS, rain);		
			
	printf("\n");
	
	return 0;
}			 

float print_rain_by_years(int rows, int cols, const float ar[rows][cols])
{
	int year, month;
	float subtot, total;
	
	printf(" ��� ���������� ������� (� ���)\n");
		for(year = 0, total = 0; year < rows; year++)
		{
			for(month = 0, subtot = 0; month < cols; month++)
				subtot += ar[year][month];
			printf("%5d %15.1f\n", 2000 + year, subtot);
			total += subtot;
		}
	return total;	
}

void print_rain_by_months(int rows, int cols, const float ar[rows][cols])
{
	int month, year;	
	float subtot;
	
	printf("�������������� ���������� �������:\n\n");
		printf(" ��� ��� ��� ��� ��� �� �� ��� ��� ��� ��� ���\n");
		for(month = 0; month < cols; month++)
		{
			for(year = 0, subtot = 0; year < rows; year++)
				subtot += ar[year][month];
			printf("%4.1f", subtot/rows);
		}
}











