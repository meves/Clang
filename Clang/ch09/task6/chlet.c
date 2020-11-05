#include <stdio.h>
#include <ctype.h>
#define LOWER 96
#define UPPER 64
void read_letter();
int num_of_letter(int ch);

int main(void)
{
	printf("Введите любые символы: \n");
	read_letter();
	printf("Программа завершена.");
	
	return 0;
}

void read_letter()
{
	int ch;
	
	// read symbols from stdin to EOF
	while((ch = getchar()) != EOF)
	{	
		int num;
		
		// message if symbol is letter 
		if((num = num_of_letter(ch)) != -1)
		{
			printf("%c - буква\n", ch);
			// message its number in alphabet
			printf("Порядковый номер %c  = %d\n", ch, num);
		}			
	}
}

int num_of_letter(int ch)
{
	int num;
	
	if(isalpha(ch))
	{
		if(islower(ch))
			num = ch - LOWER;
		else if(isupper(ch))
			num = ch - UPPER;
		return num;
	}
	else
		return -1;	
}








