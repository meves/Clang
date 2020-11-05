#include <stdio.h>

void chline(char ch, int, int j);

int main(void)
{
	char ch;
	int i, j;
	
	printf("‚Ά¥¤¨β¥ α¨¬Ά®« ¨ ¤Ά  ζ¥«λε η¨α« : ");
	scanf("%c %d %d", &ch, &i, &j);
	
	chline(ch, i, j);
	
	return 0;
}