#include "main.h"

/**
 * converter - converts number and inputBase into string
 * @number: input number
 * @inputBase: input base
 * @lowercase: flag if hexa values need to be lowercase
 * Return: result string
 */
char *converter(unsigned long int number, int inputBase, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[number % inputBase];
		number /= inputBase;
	} while (number != 0);

	return (ptr);
}
