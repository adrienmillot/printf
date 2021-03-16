#include <stdlib.h>
#include "holberton.h"
/**
 * convert_alpha_numeric - convert digits to char
 * @nb: digit or number
 * @upper: upper case check
 * Return: converted value
 */

int convert_alpha_numeric(int nb, int upper)
{
	if (nb >= 10)
		return (nb - 10 + ((upper) ? 'A' : 'a'));
	else
		return (nb + '0');
}

/**
 * convert_base - convert unsigned from base 10 to base
 * @nb: decimal number
 * @base: base to convert from
 * @upper: upper case check
 * Return: converted number to string
 */

char *convert_base(unsigned long nb, unsigned int base, int upper)
{
	int i = 0;
	char *str;
	unsigned long nbr = nb;

	while (nbr >= base)
	{
		nbr /= base;
		i++;
	}
	str = malloc(sizeof(char) * i + 2);
	if (!str)
		return (0);
	str[i + 1] = '\0';

	while (i >= 0)
	{
		nbr = nb % base;
		str[i] = convert_alpha_numeric(nbr, upper);
		nb /= base;
		i--;
	}
	return (str);
}

/**
 * convert_base_pointer - convert pointer void to ul
 * @p: pointer
 * Return: converted string
 */

char *convert_base_pointer(void *p)
{
	unsigned long adress;
	char *str;

	adress = (unsigned long) p;
	str = convert_base(adress, 16, 0);
	return (str);
}
/**
 * convert_rot13 - encode using rot13
 * @str: string to encode
 * Return: encoded string
 */

char *convert_rot13(char *str)
{
	int i = 0, j;
	char *s;
	int size = _strlen_recursion(str);
	char origin[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char modif[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	s = malloc(sizeof(char) * size + 1);
	if (!s)
		return (0);

	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == origin[j])
			{
				s[i] = modif[j];
				break;
			}
		}
		if (j == 53)
		{
			s[i] = str[i];
		}
	}
	s[i] = '\0';

	return (s);
}
