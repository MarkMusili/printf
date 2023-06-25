#include "main.h"
#include <stdlib.h>
#include <stddef>
#include <stdarg.h>

/**
 * print_c - print a character.
 * @args: character to print
 * @len: length of the format
 * Return: length of the variable or -1
 */
int print_c(va_list args, unsigned long long *len)
{
	char c;

	if (!args)
		return (-1);
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
int print_s(va_list args, unsigned long long *len)
{
	char *s;
	int i = 0;

	if (!args)
		return (-1);
	s = va_arg(args, char *);
	if (s == NULL)
		return (-1);
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	*len += i;
	return (i);
}
