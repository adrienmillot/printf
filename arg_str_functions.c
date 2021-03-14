#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_char - print single char
 * @ap: arg list
 * Return: number of printed char
 */

int print_char(va_list ap)
{
	return (_putchar(va_arg(ap, int)));
}

/**
 * print_str - print string
 * @ap: arg list
 * Return: number of printed char
 */

int print_str(va_list ap)
{
	return (_puts(va_arg(ap, char *), 0));
}

/**
 * print_str_unprintable - unprint some characters
 * @ap: arg list
 * Return: number of printed char
 */

int print_str_unprintable(va_list ap)
{
	return (_puts(va_arg(ap, char *), 1));
}

/**
 * print_str_reverse - reverse a string
 * @ap: arg list
 * Return: number printed char
 */
int print_str_reverse(va_list ap)
{
	char *argument = va_arg(ap, char *), *str;
	int size, left, limit, right;
	char cLeft, cRight;

	size = _strlen_recursion(argument);
	right = size - 1;
	limit = (size % 2 == 0) ? (size + 1) / 2 : (size / 2);

	str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (0);
	}

	if (size % 2 != 0)
	{
		str[limit] = argument[limit];
	}

	for (left = 0; left < limit; left++)
	{
		cLeft = argument[left];
		cRight = argument[right];
		str[left] = cRight;
		str[right] = cLeft;
		right--;
	}

	return (_puts(str, 0));
}

/**
 * print_rot13 - print string with rot13
 * @ap: arg list
 * Return: number of printed char
 */

int print_rot13(va_list ap)
{
	int sum;
	char *str;

	str = convert_rot13(va_arg(ap, char*));
	sum = _puts(str, 0);
	free(str);
	return (sum);
}
