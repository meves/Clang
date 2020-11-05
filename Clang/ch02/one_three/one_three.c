// one_three.c - печатает слова один три и вызывает функцию two()
#include <stdio.h>
void two(void);
void one_three(void)
{
	printf("один\n");
	two();
	printf("три\n");
	return;
}