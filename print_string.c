#include "printf.h"

int print_char(char c)
{
	static char buff[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buff, i);
		i = 0;
	}
	if (c != -1)
	{
		buff[i] = c;
		i++;
	}
	return (1);
}

int print_string(char *str)
{
	int i;
	char *nulStr = "(null)";

	if (str == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			print_char(nulStr[i]);
		return (i);
	}
	for (i = 0; str[i] != '\0'; i++)
		print_char(str[i]);
	return (i);
}
