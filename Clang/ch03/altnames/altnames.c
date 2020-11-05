// altnames.c - ��७�ᨬ� ����� ��� 楫��᫥���� ⨯��
#include <stdio.h>
#include <inttypes.h>
int main(void)
{
	int16_t me16;
	me16 = 4593;

	printf("���砫� �।�������, �� int16_t ����� ⨯ short: ");
	printf("me16 = %hd\n", me16);
	printf("����� �� �㤥� ������ ������� �।���������.\n");
	printf("����� �⮣� ��ᯮ������ \"���ப�������\" �� 䠩�� inttypes.h: ");
	printf("me16 = %" PRId16 "\n", me16);	
	
	return 0;
}


/*
⨯� � �筮� �ਭ��
int8_t
int16_t
int32_t
int64_t

⨯� � �������쭮� �ਭ��
int_least8_t
int_least16_t
int_least32_t
int_least64_t

��᮪�᪮���� ⨯� � �������쭮� �ਭ��
int_fast8_t
int_fast16_t
int_fast32_t
int_fast64_t

⨯� � ���ᨬ��쭮� �ਭ��
intmax_t
uintmax_t
*/