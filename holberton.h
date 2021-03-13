#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_str(va_list ap);
int print_nbr(va_list ap);
int print_binary(va_list ap);
int print_octal(va_list ap);
int print_hexa_lower(va_list ap);
int print_hexa_upper(va_list ap);
int print_unsigned(va_list ap);
int print_str_particular(va_list ap);
int print_number(int n);
int print_unsigned_number(unsigned int n);
int _putchar(char c);
int _puts(char *str, int ascii);
int _nbr_len(int prmNumber);
char *_itoa(int prmNumber);
int convert_alpha_numeric(int nb, int upper);
char *convert_base(unsigned int nb, int base, int upper);
char *_strdup(char *str);

/**
 * struct flags_printf
 * @c: flag string
 * @f: pointer to func
 */

typedef struct flags_printf
{
	char *c;
	int (*f)(va_list);
} flags_p;
#endif
