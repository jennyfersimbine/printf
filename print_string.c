#include "printf.h"
#include <unistd.h>

/**
 * print_char - print hcaracters
 * @c: char to ptint
 * Return: int
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - print strings
 * @str: string to print
 * Return: nr of chars printed
 */
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
