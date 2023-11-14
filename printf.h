#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stddef.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(char c);
int print_string(char *str);
void print_digit(int n);
int nrDigitsPrinted(int n);
int print_int(int n);
#endif /*PRINTF_H*/
