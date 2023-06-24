#include "main.h"
#include <stdio.h>
/**
 * print_c - prints a character
 * @args: arguments given
 * Return: Number of characters printed
 */
int print_c(va_list args)
{
	char *c;

	c = va_arg(args, char *);
	if (c != NULL)
		c = "";
	putchar(*c);
	return (1);
}

/**
 * print_s - Prints a string
 * @args: arguments given
 * Return: Number of characters printed
 */
int print_s(va_list args)
{
	char *s;
	int count = 0;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "";
	while (*s != '\0')
	{
		putchar(*s);
		s++;
		count++;
	}
	return (count);
}

/**
 * _printf - produces output according to a format
 * @format: format specifier to be used
 * @... - variable number of arguments
 * Return: the number of printed characters excluding th null char.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int char_count = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					char_count += print_c(args);
					break;
				case 's':
					char_count += print_s(args);
					break;
				case '%':
					putchar('%');
					char_count++;
					break;
				default:
					putchar('%');
					char_count++;
					break;
			}
		}
		else
		{
			putchar(*format);
			char_count++;
		}
		format++;
	}
	va_end(args);
	return (char_count);
}
