#include "holberton.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	char c = 'o';
	char str[] = "toto";
	int i = 32907978, j = 0, k = -97984372, l = INT_MIN;
	unsigned int a = -225, b = 12 , e = 5, d = 98;
	void *p = &i;
	void *pp = &str;

	_printf("[string] %s\n hello %c\n", str, c);
	printf("[string] %s\n hello %c\n", str, c);
	printf("[itoa] %s\n", _itoa(i));
	printf("[itoa] %s\n", _itoa(j));
	printf("[itoa] %s\n", _itoa(k));
	printf("[itoa] %s\n", _itoa(l));
	_printf("[integer] %i %i %i %i\n", i, j, k, l);
	printf("[integer] %i %i %i %i\n", i, j, k, l);
	_printf("[decimal] %d %d %d %d\n", i, j, k, l);
	printf("[decimal] %d %d %d %d\n", i, j, k, l);
	_printf("[%%] %%\n");
	printf("[%%] %%\n");
	_printf("Unsigned hexadecimal:[%x, %X]\n", a, b);
	printf("Unsigned hexadecimal:[%x, %X]\n", a, b);
	_printf("int octal: [%o, %o]\n", i , k);
	printf("int octal: [%o, %o]\n", i , k);
	_printf("Unsigned binary: [%b, %b]\n", e, d); 
	printf("%u\n", a);
	_printf("%u\n", a);
	_printf("carriage return %S\n", "test1 \n test2");
	_printf("carriage return %S\n", "test1 \t test2");
	_printf("carriage return %S\n", "test1 \b test2");
	_printf("carriage return %S\n", "test1 \a test2");
	_printf("carriage return %S\n", "ned long nb,test1 \v test2");
	_printf("carriage return %S\n", "test1 \r test2");
	_printf("%r\n", "Holberton");
	printf("[adress = %p %p]\n", p, pp);
	_printf("[adress = %p %p]\n", p, pp);

	return (0);
}
