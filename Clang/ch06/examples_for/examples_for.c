// examples_for.c - примеры гибкого использования цикла for
#include <stdio.h>

void function1();
void function2();
void function3();
void function4();
void function5();
void function6();
void function7();
void function8();
/*void function9();
*/
int main(void)
{
	function1();
	function2();
	function3();
	function4();
	function5();
	function6();
	function7();
	function8();
	
	return 0;
}

void function1(){
	int secs;
	
	for(secs=5; secs>0; secs--)
		printf("%d секунд!\n", secs);
	printf("Есть зажигаение!\n");
}

void function2(){
	int n;
	
	for(n = 2; n < 60; n = n + 13)
		printf("%d \n", n);
}

void function3(){
	char ch;
	
	for(ch = 'a'; ch <= 'z'; ch++)
		printf("Значение ASCII для %c равно %d\n", ch, ch);		
}

void function4(){
	int num;
	
	for(num=1; num*num*num<=216; num++)
		printf("Куб числа %d равен %d\n", num, num*num*num);
}

void function5(){
	double debt;
	
	for(debt=100.0; debt<150.0; debt=debt*1.1)
		printf("Теперь ваш долг равен $%.2f\n", debt);
}

void function6(){
	int x;
	int y = 55;
	
	for(x=1; y<=75; y=(++x*5)+50)
		printf("%10d %10d\n", x, y);
}

void function7(){
	int ans, n;
	ans = 2;
	
	for(n=3; ans<=25;)
		ans = ans * n;
	printf("n = %d; ans = %d\n", n, ans);
}

void function8(){
	int num = 0;
	
	for(printf("Продолжайте вводить числа!\n"); num != 6; )
		scanf("%d", &num);
	printf("Вот то число, которое было нужно!\n");
}









