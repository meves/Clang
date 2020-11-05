// running.c - �ணࠬ��, �������� ��� ��, �� ���������� �����
#include <stdio.h>
const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137;
int main(void)
{
	double distk, distm;
	double rate;
	int min, sec;
	int time;
	double mtime;
	int mmin, msec;
	
	printf("�� �ணࠬ�� ������뢠�� �६� �஡��� ���⠭樨 � �����᪮� ��⥬�\n");
	printf("�� �६� �஡��� ����� ���� � ������ ���� �।���\n");
	printf("᪮���� � ����� � ��.\n");
	printf("������ ���⠭�� �஡��� � ���������.\n");
	scanf("%lf", &distk);
	printf("����� ������ �६� � ������ � ᥪ㭤��.\n");
	printf("��筨� � ����� �����.\n");
	scanf("%d", &min);
	printf("������ ������ ᥪ㭤�.\n");
	scanf("%d", &sec);
	
	time = S_PER_M * min + sec;
	distm = M_PER_K * distk;
	rate = distm / time * S_PER_H;
	mtime = (double)time / distm;
	mmin = (int)mtime / S_PER_M;
	msec = (int)mtime % S_PER_M;
	printf("�� �஡����� %1.2f �� (%1.2f ����) �� %d ���, %d ᥪ.\n", distk, distm, min, sec);
	printf("⠪�� ᪮���� ᮮ⢥����� �஡��� ����� ���� �� %d ���", mmin);
	printf(" %d sec.\n��� �।��� ᪮���� ࠢ�﫠�� %1.2f ���� � ��.\n", msec, rate);
	
}