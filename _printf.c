#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>

/**
  * id_select - function pointer to iterate over the list of formats and
  * select a function to execute
  * @a: string to process
  * Return: pointer to function needed.
  */
int (*id_select(const char *a))(va_list, unsigned  long int *)
{
	int i = 0;
	id id_array[] = {
		{'c', print_c},
		{'s', print_s},
		{'d', print_d},
		{0, NULL}
	};

	while (id_array[i].type)
	{
		if (id_array[i].type == *a)
		{
			return (id_array[i].function);
		}
		i++;
	}
	return (NULL);
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
	unsigned long int len = 0;
	int bytes = 0;
	const char *a;
	va_list args;

	if (format)
		a = format;
	else
		return (-1);
	va_start(args, format);
	while (*a != '\0')
	{
		if (*a == '%')
		{
			a++;
			bytes += id_select(a)(args, &len);
		}
		else
		{
			_putchar(*a);
			len++;
			bytes++;
		}
		a++;
	}
	va_end(args);
	return (bytes);
}
