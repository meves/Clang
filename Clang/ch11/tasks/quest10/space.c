const char * space(const char * string)
{
	const char * ps;
	
	ps = string;
	// если указатель установлен на символ пробела, возвращаем его
	// иначе ищем первый символ пробела или конец строки
	while (*ps != ' ' && *ps != '\0')
		ps++;		
		
	return ps;
}