#include <stdio.h>

void sum_arr(int l, int s1[l], int s2[l], int t[l]);
void print_arr(int l, int ar[l]);

int main(void)
{
	int len = 9;
	int source1[len], source2[len], target[len];
	int i;
	
	for (i = 0; i < len; i++)
	{
		source1[i] = 1+i;	
		source2[i] = 2+i;	
	}	
	
	sum_arr(len, source1, source2, target);
	print_arr(len, source1);
	print_arr(len, source2);
	print_arr(len, target);
	
	return 0;
}

void sum_arr(int l, int s1[l], int s2[l], int t[l])
{
	int i;
	
	for (i = 0; i < l; i++)
		t[i] = s1[i] + s2[i];
}

void print_arr(int l, int ar[l])
{
	int i;
	
	for (i = 0; i < l; i++)
		printf("[%d] = %d ", i, ar[i]);
	printf("\n\n");
}