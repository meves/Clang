void changen(char * str)
{
	char * ptr;
	
	ptr = str;
	while (*ptr != '\n')
		ptr++;
	*ptr = '\0';
}