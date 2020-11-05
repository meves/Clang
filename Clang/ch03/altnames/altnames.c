// altnames.c - переносимые имена для целочисленных типов
#include <stdio.h>
#include <inttypes.h>
int main(void)
{
	int16_t me16;
	me16 = 4593;

	printf("Сначала предположим, что int16_t имеет тип short: ");
	printf("me16 = %hd\n", me16);
	printf("Далее не будем делать никаких предположений.\n");
	printf("Вместо этого воспользуйтесь \"макрокомандой\" из файла inttypes.h: ");
	printf("me16 = %" PRId16 "\n", me16);	
	
	return 0;
}


/*
типы с точной шириной
int8_t
int16_t
int32_t
int64_t

типы с минимальной шириной
int_least8_t
int_least16_t
int_least32_t
int_least64_t

высокоскоростные типы с минимальной шириной
int_fast8_t
int_fast16_t
int_fast32_t
int_fast64_t

типы с максимальной шириной
intmax_t
uintmax_t
*/