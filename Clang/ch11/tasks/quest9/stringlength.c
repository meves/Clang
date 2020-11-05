int stringlength(const char *str)
{
	int count = 0;
	
	while (*str++ != '\0')
		count++;
	
	return count;
}