#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_c - print a character.
 * @args: character to print
 * @len: length of the format
 * Return: length of the variable or -1
 */
int print_c(va_list args, unsigned long *len)
{
	char c;

	(*len)++;
	c = va_arg(args, int);
	return (_putchar(c));
}

/**
 * print_s - print a string
 * @args: string to be printed
 * @len: length of the format
 * Return: length of the variable or -1
 */
int print_s(va_list args, unsigned long *len)
{
	char *s;
	char *nil = "(null)";
	int i = 0;

	s = va_arg(args, char *);
	if (s == NULL || *s == '\0')
	{
		s = nil;
	}
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	*len += i;
	return (i);
}

/**
 * print_d - print an integer
 * @args: number to be printed
 * @len: length of the format
 * Return: length of the variable or -1
 */
int print_d(va_list args, unsigned long *len)
{
	long d;
	char *dtos;
	int i = 0;

	d = va_arg(args, int);
	dtos = _dtos(d);
	while (dtos[i])
	{
		_putchar(dtos[i]);
		i++;
	}
	free(dtos);
	*len += i;
	return (i);
}

/**
 * print_i - print an decimal number
 * @args: number to be printed
 * @len: length of the format
 * Return: length of the variable or -1
 */
int print_i(va_list args, unsigned long *len)
{
	return (print_d(args, len));
}
