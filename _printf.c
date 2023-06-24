#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>

/**
  * id_select - iterate over the list of formats and
  * select a function to execute
  * @a: string to process
  * @args: argument list
  * @len: keep track of printed string length
  */
void id_select(const char *a, va_list args, unsigned long long *len)
{
	int i;
	id id_array[] = {
		{'c', _cprint},
		{'s', _sprint},
		{'i', _iprint},
		{'d', _dprint},
		{'%', _ctprint},
		{'\0', NULL}
	};

	i = 0;
	while (id_array[i].type)
	{
		if (*a == id_array[i].type)
		{
			id_array[i].function(args, len);
			break;
		}
		i++;
	}
}

/**
  * _printf - function that produces output according to a format.
  * @format: is a character string.
  * The format string is composed of zero or more directives.
  * Return: the number of characters printed
  * (excluding the null byte used to end output to strings)
  */
int _printf(const char *format, ...)
{
	unsigned long long len = 0;
	const char *a;
	int is_format;
	va_list args;

	if (format)
		a = format;
	else
		return (-1);
	va_start(args, format);
	while (*a)
	{
		is_format = (*a == '%') ? true : false; /* handle special cases later */
		if (is_format)
			id_select(++a, args, &len);
		else
		{
			_putchar(*a);
			len++;
		}
		a++;
	}
	va_end(args);
	return (len);
}
