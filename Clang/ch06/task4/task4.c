// task4.c - �뢮��� �� ����� 䨣��� � ���� ��ࠬ���
#include <stdio.h>
#define ROW 5
int main(void){
	
	char ch, letter;
	char space = ' ';
	int i, j, k, m;
	
	// ������� � ���짮��⥫� ���� �㪢� ���孥�� ॣ����
	printf("������ �㪢� � ���孥� ॣ����: ");
	scanf("%c", &ch);
	
	// �뢥�� �� ����� 䨣��� � ���� ��ࠬ���
	// � �������� ᨬ����� �� 業��� � ������ ��ப�
	for(i = 1; i <= ROW; i++){						// �ࠢ��� ��ப���
		
		for(j = ROW-i; j > 0; j--){					// �ࠢ��� �஡�����
			printf("%c", space);
		}
		
		for(k = 1, letter = ch - (ROW-1); k <= i; k++, letter++){	// �뢮� � ��אַ� ���浪�
			printf("%c", letter);
		}
		
		for(m = 1, letter -= 2; m < i; m++, letter--){		// �뢮� � ���⭮� ���浪�
			printf("%c", letter);
		}
		
		for(j = ROW-i; j > 0; j--){					// �ࠢ��� �஡�����
			printf("%c", space);
		}
		
		printf("\n");
	}	
	
	return 0;	
}