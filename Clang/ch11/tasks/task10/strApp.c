#include <stdio.h>
#include "strLib.h"
int main(void)
{
	char buf_str[ROWS][COLS];		// ¡ãä¥à ¤«ï áâà®ª
	unsigned int fact_rows;			// ç¨á«® § ¯®«­¥­­ëå áâà®ª	
	unsigned int menu_num;			// §­ ç¥­¨¥ ¬¥­î
	
	
	puts("Enter 10 strings not longer than 80 symbols or EOF to exit:");
	fillin_array(buf_str, ROWS);
		
	puts("\nMenu:");
	puts("Enter 1 to print source list.");	
	puts("Enter 2 to print as an ASCII sequence.");	
	puts("Enter 3 to print strings in ascending order of length.");	
	puts("Enter 4 to print strings in ascending order from the length of their first word.");	
	puts("Enter 5 to quit the programm.");	
	
	while (menu_num = get_number())
	{
		switch (menu_num)
		{
			// ¯¥ç âì ¨áå®¤­®£® á¯¨áª 
			case 1:
				puts("case 1");
				//print_source_list(buf_str, fact_rows);
				break;
			
			// ¯¥ç âì ¢ ¢¨¤¥ ã¯®àï¤®ç¥­­®© ¯®á«¥¤®¢ â¥«ì­®áâ¨ ¢ ª®¤¨à®¢ª¥ ASCII
			case 2:
				puts("case 2");	
				//print_ASCII_list();
				break;
			
			// ¯¥ç âì áâà®ª ¢ ¯®àï¤ª¥ ¢®§à áâ ­¨ï ¨å ¤«¨­ë
			case 3:
				puts("case 3");
				//print_str_inc_len();
				break;
			
			// ¯¥ç âì áâà®ª ¢ ¯®àï¤ª¥ ¢®§à áâ ­¨ï ¤«¨­ë ¯¥à¢®£® á«®¢  áâà®ª¨
			case 4:
				puts("case 4");
				//print_fword_inc();
				break;		
			
			// ¢ëå®¤ ¨§ ¯à®£à ¬¬ë
			case 5:
				goto exit;			
			
			default:
				printf("‚¢¥¤¥­® ­¥¯à ¢¨«ì­®¥ §­ ç¥­¨¥ ¬¥­î - %d. ‚¢¥¤¨â¥ §­ ç¥­¨¥ ®â 1 ¤® 5\n", menu_num);
				break;
		}		
		puts("Menu:");
		puts("Enter 1 to print source list.");	
		puts("Enter 2 to print as an ASCII sequence.");	
		puts("Enter 3 to print strings in ascending order of length.");	
		puts("Enter 4 to print strings in ascending order from the length of their first word.");	
		puts("Enter 5 to quit the programm.");	
	}	
	
	exit: puts("Programm is over!");
	
	return 0;		
}

