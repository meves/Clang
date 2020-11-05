// pwd.c - ввод пароля
#include <stdio.h>
int main(void)
{
	int pwd = 13;
	int pwd_ent;
	
	do{
		printf("Введите числовой пароль: ");
		scanf("%d", &pwd_ent);
	}while(pwd_ent != pwd);
	printf("Поздравляем! вы успешно вошли в систему.");
	
	return 0;
}