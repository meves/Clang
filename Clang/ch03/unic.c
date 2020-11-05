#include <stdio.h>
#include <wchar.h> // wchar_t[] wchar_t wchar_t *
int main(void)
{
	char ustring[] = "строка";
	char ascii[] = "string";
	char usym[] = "Щ";
	wchar_t uch = 'Щ';
	char ch = 'R';
	

	printf("%s %lu\n", ustring, sizeof(ustring));
	printf("%s %lu\n", ascii, sizeof(ascii));
	printf("%s %lu\n", usym, sizeof(usym));
	printf("uch: %c - %lu; ch: %c - %lu\n", 
			uch, sizeof(uch), ch, sizeof(ch));
	printf("%u\n", 'FATE');

	return 0;
}