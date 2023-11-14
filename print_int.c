#include "main.h"

/**
 * print_digit - print the digits
 * @n: number to print
 */
void print_digit(int n)
{
	unsigned int d;

	if (n < 0)
	{
		print_char('-');
		d = -n;
	} else
		d = n;

	if (d / 10)
		print_digit(d / 10);
	print_char((d % 10) + '0');
}

/**
 * nrDigitsPrinted - calculate digits printed
 * @n: number to check
 * Return: number of digits
 */
int nrDigitsPrinted(int n)
{
	unsigned int nrDigits, i;

	nrDigits = 0;
	if (n < 0)
		i = n * -1;
	else
		i = n;
	while (i != 0)
	{
		i /= 10;
		nrDigits++;
	}
	return (nrDigits);
}

/**
 * print_int - print numbers
 * @n: number to print
 * Return: nr of digits printed
 */
int print_int(int n)
{
		print_digit(n);
		return (nrDigitsPrinted(n));
}
