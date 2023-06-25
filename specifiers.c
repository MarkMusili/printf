#include "main.h"
#include <stdio.h>
/**
 * print_c - prints a character
 * @args: arguments given
 * @len: Number of bytes printed
 * Return: Number of characters printed
 */
int print_c(va_list args, unsigned long long *len)
{
	char c;

	c = (char)va_arg(args, int);
	if (c == NULL)
		c = '\0';
	_putchar(c);
	(*len)++;
	return (1);
}

/**
 * print_s - Prints a string
 * @args: arguments given
 * @len: Number of bytes printed.
 * Return: Number of characters printed
 */
int print_s(va_list args, unsigned long long *len)
{
	char *s;
	int count = 0;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "";
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		count++;
	}
	*len += count;
	return (count);
}
