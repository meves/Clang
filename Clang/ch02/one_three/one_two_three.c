// one_two_three.c - печатает фразы "начать сейчас:" "порядок!" 
// и вызывает функцию one_three()
#include <stdio.h>
void one_three(void);
int main(void)
{
	printf("начать сейчас:\n");
	one_three();
	printf("порядок!\n");

	return 0;
}