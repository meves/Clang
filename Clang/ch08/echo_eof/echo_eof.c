// echo_eof.c - �ᯮ�짮����� EOF
#include <stdio.h>
int main(void)
{
	int ch;
	char arr[] = "String";
	
	while ((ch = getchar()) != EOF)
		putchar(ch);
	
	printf("\nThe programm is over!\n");
	printf("%s", arr);
	
	return 0;
}
