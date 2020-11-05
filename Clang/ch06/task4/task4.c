// task4.c - выводит на печать фигуру в виде пирамиды
#include <stdio.h>
#define ROW 5
int main(void){
	
	char ch, letter;
	char space = ' ';
	int i, j, k, m;
	
	// запросить у пользователя ввод буквы верхнего регистра
	printf("Введите букву в верхнем регистре: ");
	scanf("%c", &ch);
	
	// вывести на печать фигуру в виде пирамиды
	// с введенным символом по центру в нижней строке
	for(i = 1; i <= ROW; i++){						// управляет строками
		
		for(j = ROW-i; j > 0; j--){					// управляет пробелами
			printf("%c", space);
		}
		
		for(k = 1, letter = ch - (ROW-1); k <= i; k++, letter++){	// вывод в прямом порядке
			printf("%c", letter);
		}
		
		for(m = 1, letter -= 2; m < i; m++, letter--){		// вывод в обратном порядке
			printf("%c", letter);
		}
		
		for(j = ROW-i; j > 0; j--){					// управляет пробелами
			printf("%c", space);
		}
		
		printf("\n");
	}	
	
	return 0;	
}