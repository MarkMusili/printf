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
void id_select(const char *a, va_list args, unsigned long *len)
{
	int i;
	id id_array[] = {
		{'c', print_c},
		{'s', print_s},
		{'i', print_i},
		{'d', print_d},
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
	if (id_array[i].type == '\0')
	{
		_putchar(*(a - 1));
		_putchar(*a);
		*len += 2;
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
	unsigned long len = 0;
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
		is_format = (*a == '%') ? 1 : 0; /* handle special cases later */
		if (is_format && *++a != '%')
			id_select(a, args, &len);
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
