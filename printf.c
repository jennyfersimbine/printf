#include "printf.h"


int _printf(const char *format, ...)
{
	va_list args;
	int nrCharsPrinted = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			nrCharsPrinted += print_char(*format);
		} else
		{
			format++;
			if (*format == ' ' || *format == '\0')
			{
				return (-1);
			}
			if (*format == 'c')
			{
				nrCharsPrinted += print_char(va_arg(args, int));
			}
			else if (*format == 's')
			{
				nrCharsPrinted += print_string(va_arg(args, char *));
			}
			else if (*format == 'i' || *format == 'd')
			{
				nrCharsPrinted += print_int(va_arg(args, int));
			} else
			{
				nrCharsPrinted += print_char('%');
				nrCharsPrinted += print_char(*format);
			}
		}
		format++;
	}
	va_end(args);
	return (nrCharsPrinted);
}
