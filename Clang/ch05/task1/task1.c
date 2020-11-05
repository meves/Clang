// task.1 - перевод минут в часы и минуты
#include <stdio.h>
#define MIN_PER_HOUR 60
int main(void)
{
	int time, min, hour;
	
	printf("Введите время в минутах или 0 для выхода\n");
	scanf("%d", &time);
	while(time > 0){
		hour = time / MIN_PER_HOUR;
		min = time % MIN_PER_HOUR;
		printf("%d минут - %d часов и %d минут\n", time, hour, min);	
		printf("Введите время в минутах или 0 для выхода\n");
		scanf("%d", &time);
	}
	
	return 0;
}