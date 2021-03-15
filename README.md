# printf

## Usage

```c
#include "holberton.h"

// ...

_printf("%c", "H");
_printf("%s", "Bienvenue chez vous");
_printf("%r", "Holberton");
_printf("%R", "adrien");

// ...
```

Will display:

```shell
H
Bienvenue chez vous
notrebloH
nqevra
```

## Files

### arg_nbr_functions.c & arg_nbr_functions_1.c

This file corresponds to every functions used to manipulate number arguments.

### arg_str_functions.c

This file corresponds to every functions used to maninipulate string argument.

### conversion.c

This file corresponds to every functions used to convert number, string, pointer.

- int convert_alpha_numeric(int nb, int upper)
- char *convert_base(unsigned long nb, unsigned int base, int upper)
- char *convert_base_pointer(void *p)
- char *convert_rot13(char *str)

### numbers.c

This file corresponds to every basic number functions.

- int print_unsigned_number(unsigned int n)
- int print_number(int n)
- int _nbr_len(int prmNumber)
- char *_itoa(int prmNumber)

### strings.c

This files corresponds to every basic string functions.

- int _putchar(char c)
- int _puts(char *str, int ascii)
- int _strlen_recursion(char *s)
- char *_strdup(char *str)

## Authors

Hedy OUAHES <hedy.ouahes@holbertonschool.com>

Adrien MILLOT <adrien.millot@holbertonschool.com>