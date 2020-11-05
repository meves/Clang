// task11.c - программа расчета стоимости заказа овощей с доставкой
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
	
	printf("Программа расчета стоимости заказа овощей с доставкой.\n");
	printf("Введите символ, чтобы указать вес:\n"
			"a - артишоков\n"
			"b - свеклы\n"
			"c - моркови\n"
			"q - закончить формирование заказа\n");
	// сформировать заказ
	while ( choice = getchar() )
	{		
		switch (choice)
		{
			case 'a':
				// указать вес артишоков в фунтах
				printf("Укажите вес артишоков в фунтах: ");
				scanf("%lf", &artichoke_weight);
				break;
			case 'b':
				// указать вес свеклы в фунтах	
				printf("Укажите вес свеклы в фунтах: ");
				scanf("%lf", &beet_weight);
				break;
			case 'c':
				// указать вес моркови в фунтах	
				printf("Укажите вес моркови в фунтах: ");
				scanf("%lf", &carrot_weight);
				break;	
			case 'q':
				// завершить процесс формирования заказа
				printf("Формирование заказа завершено.\n");	
				goto computing;	
			default:				
				printf("Введен неверный символ!\n");
				break; 
		}
		while(getchar() !='\n') 
			continue;
		printf("Введите символ, чтобы указать вес:\n"
			"a - артишоков\n"
			"b - свеклы\n"
			"c - моркови\n"
			"q - закончить формирование заказа\n");
	}		
	
	// вычислить:
			
		// общие издержки
	computing:
		artichoke_cost = artichoke_weight * PRICE_ARTICHOKE_PER_POUND; 
		beet_cost = beet_weight * PRICE_BEET_PER_POUND; 
		carrot_cost = carrot_weight * PRICE_CARROT_PER_POUND;
		goods_cost = artichoke_cost + beet_cost + carrot_cost;	
		
		// скидку
		if ( goods_cost >= BASE)
			discount = goods_cost * DISCOUNT;
		else 
			discount = 0;
		
		// расходы на доставку
		total_weight = artichoke_weight + beet_weight + carrot_weight;
		if ( total_weight <= DELIVERY_1 )
			delivery_cost = total_weight * DELIVERY_COST_1;
		else if ( total_weight > DELIVERY_1 && total_weight <= DELIVERY_2)
			delivery_cost = total_weight * DELIVERY_COST_2;
		else
			delivery_cost = DELIVERY_COST_3 + (total_weight - DELIVERY_2) * DELIVERY_COST_3_PER_POUND;
		
		// окончательную сумму заказа
		order_cost = goods_cost - discount + delivery_cost;
			
	// отобразить информацию о покупке
		// стоимость фунта товара
		// количество заказанных фунтов
		// стоимость заказа в расчете на каждый овощ
		// общую стоимость заказа
		// скидку
		// стоимость доставки
		// итоговую сумму заказа
	printf("Итоговая стоимость покупки:\n"
			"стоимость фунта товара = %.2f\n"
			"количество заказанных фунтов = %.2f\n"
			"стоимость заказа в расчете на артишоки = %.2f, свеклу = %.2f, морковь = %.2f\n"
			"общая стоимость заказа = %.2f\n"
			"скидка = %.2f\n"
			"стоимость доставки = %.2f\n"
			"итоговая сумма заказа = %.2f\n"
			, goods_cost / total_weight, total_weight, 
			goods_cost / artichoke_weight, goods_cost / beet_weight, goods_cost / carrot_weight,
			goods_cost, discount, delivery_cost, order_cost);		
	
	printf("Программа завершена!\n");
		
	return 0;
}







