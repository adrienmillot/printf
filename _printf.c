#include <stdarg.h>
#include "holberton.h"
#include <stddef.h>

/**
 * get_op - select function for conversion char
 * @c: char to check
 * Return: pointer to function
 */

int (*get_op(char c))(va_list)
{
	int i = 0;

	flags_p fp[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_nbr},
		{"d", print_nbr},
		{"b", print_binary},
		{"o", print_octal},
		{"x", print_hexa_lower},
		{"X", print_hexa_upper},
		{"u", print_unsigned},
		{"S", print_str_unprintable},
		{"r", print_str_reverse},
		{"p", print_ptr},
		{"R", print_rot13}
	};
	while (i < 13)
	{
		if (c == fp[i].c[0])
		{
			return (fp[i].f);
		}
		i++;
	}
	return (0);
}

/**
 * _printf - Reproduce behavior of printf function
 * @format: format string
 * Return: value of printed chars
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int sum = 0, i = 0;
	int (*func)(va_list);

	if (!format)
		return (-1);
	va_start(ap, format);
	if (!ap)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{

			func = get_op(format[i + 1]);
			if (format[i + 1] == '%')
			{
				i++;
			}
			else if (func != 0)
			{
				sum += func(ap);
				i += 2;
			}
		}
		sum += _putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (sum);
}
