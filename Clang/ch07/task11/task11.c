// task11.c - �ணࠬ�� ���� �⮨���� ������ ���饩 � ���⠢���
#include <stdio.h>
#define PRICE_ARTICHOKE_PER_POUND 1.25
#define PRICE_BEET_PER_POUND 0.65
#define PRICE_CARROT_PER_POUND 0.89
#define BASE 100.00
#define DISCOUNT 0.05
#define DELIVERY_1 5.0
#define DELIVERY_2 20.0
#define DELIVERY_COST_1 3.50
#define DELIVERY_COST_2 10.00
#define DELIVERY_COST_3 8.00
#define DELIVERY_COST_3_PER_POUND 0.10
int main(void)
{
	double artichoke_weight, beet_weight, carrot_weight, total_weight;
	double artichoke_cost, beet_cost, carrot_cost, goods_cost, order_cost, delivery_cost;
	double discount;
	char choice;
	
	printf("�ணࠬ�� ���� �⮨���� ������ ���饩 � ���⠢���.\n");
	printf("������ ᨬ���, �⮡� 㪠���� ���:\n"
			"a - ���讪��\n"
			"b - ᢥ���\n"
			"c - ��મ��\n"
			"q - �������� �ନ஢���� ������\n");
	// ��ନ஢��� �����
	while ( choice = getchar() )
	{		
		switch (choice)
		{
			case 'a':
				// 㪠���� ��� ���讪�� � ����
				printf("������ ��� ���讪�� � ����: ");
				scanf("%lf", &artichoke_weight);
				break;
			case 'b':
				// 㪠���� ��� ᢥ��� � ����	
				printf("������ ��� ᢥ��� � ����: ");
				scanf("%lf", &beet_weight);
				break;
			case 'c':
				// 㪠���� ��� ��મ�� � ����	
				printf("������ ��� ��મ�� � ����: ");
				scanf("%lf", &carrot_weight);
				break;	
			case 'q':
				// �������� ����� �ନ஢���� ������
				printf("��ନ஢���� ������ �����襭�.\n");	
				goto computing;	
			default:				
				printf("������ ������ ᨬ���!\n");
				break; 
		}
		while(getchar() !='\n') 
			continue;
		printf("������ ᨬ���, �⮡� 㪠���� ���:\n"
			"a - ���讪��\n"
			"b - ᢥ���\n"
			"c - ��મ��\n"
			"q - �������� �ନ஢���� ������\n");
	}		
	
	// ���᫨��:
			
		// ��騥 ����প�
	computing:
		artichoke_cost = artichoke_weight * PRICE_ARTICHOKE_PER_POUND; 
		beet_cost = beet_weight * PRICE_BEET_PER_POUND; 
		carrot_cost = carrot_weight * PRICE_CARROT_PER_POUND;
		goods_cost = artichoke_cost + beet_cost + carrot_cost;	
		
		// ᪨���
		if ( goods_cost >= BASE)
			discount = goods_cost * DISCOUNT;
		else 
			discount = 0;
		
		// ��室� �� ���⠢��
		total_weight = artichoke_weight + beet_weight + carrot_weight;
		if ( total_weight <= DELIVERY_1 )
			delivery_cost = total_weight * DELIVERY_COST_1;
		else if ( total_weight > DELIVERY_1 && total_weight <= DELIVERY_2)
			delivery_cost = total_weight * DELIVERY_COST_2;
		else
			delivery_cost = DELIVERY_COST_3 + (total_weight - DELIVERY_2) * DELIVERY_COST_3_PER_POUND;
		
		// �����⥫��� �㬬� ������
		order_cost = goods_cost - discount + delivery_cost;
			
	// �⮡ࠧ��� ���ଠ�� � ���㯪�
		// �⮨����� ��� ⮢��
		// ������⢮ ���������� ��⮢
		// �⮨����� ������ � ���� �� ����� ����
		// ����� �⮨����� ������
		// ᪨���
		// �⮨����� ���⠢��
		// �⮣���� �㬬� ������
	printf("�⮣���� �⮨����� ���㯪�:\n"
			"�⮨����� ��� ⮢�� = %.2f\n"
			"������⢮ ���������� ��⮢ = %.2f\n"
			"�⮨����� ������ � ���� �� ���讪� = %.2f, ᢥ��� = %.2f, ��મ�� = %.2f\n"
			"���� �⮨����� ������ = %.2f\n"
			"᪨��� = %.2f\n"
			"�⮨����� ���⠢�� = %.2f\n"
			"�⮣���� �㬬� ������ = %.2f\n"
			, goods_cost / total_weight, total_weight, 
			goods_cost / artichoke_weight, goods_cost / beet_weight, goods_cost / carrot_weight,
			goods_cost, discount, delivery_cost, order_cost);		
	
	printf("�ணࠬ�� �����襭�!\n");
		
	return 0;
}







