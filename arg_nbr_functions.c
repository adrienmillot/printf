#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_nbr - print number
 * @ap: arg list
 * Return: number of printed char
 */

int print_nbr(va_list ap)
{
	return (print_number(va_arg(ap, int)));
}

/**
 * print_binary - print number binary base
 * @ap: arg list
 * Return: number of printed char
 */

int print_binary(va_list ap)
{
	return (_puts(convert_base(va_arg(ap, unsigned int), 2, 0), 0));
}

/**
 * print_octal - print number octal base
 * @ap: arg list
 * Return: number of printed char
 */

int print_octal(va_list ap)
{
	return (_puts(convert_base(va_arg(ap, unsigned int), 8, 0), 0));
}

/**
 * print_hexa_lower - print hexa lower
 * @ap: arg list
 * Return: number of printed char
 */

int print_hexa_lower(va_list ap)
{
	return (_puts(convert_base(va_arg(ap, unsigned int), 16, 0), 0));
}

/**
 * print_hexa_upper - print hexa upper
 * @ap: arg list
 * Return: number of printed char
 */

int print_hexa_upper(va_list ap)
{
	return (_puts(convert_base(va_arg(ap, unsigned int), 16, 1), 0));
}
