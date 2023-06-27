#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_c - prints a character
 * @args: arguments given
 * @len: Number of bytes printed
 * Return: Number of characters printed
 */
int print_c(va_list args, unsigned long int *len)
{
	char c;
	int i = 0;

	c = (char)va_arg(args, int);
	_putchar(c);
	(*len)++;
	i++;
	return (i);
}

/**
 * print_s - Prints a string
 * @args: arguments given
 * @len: Number of bytes printed.
 * Return: Number of characters printed
 */
int print_s(va_list args, unsigned long int *len)
{
	char *s;
	int count = 0;

	s = va_arg(args, char *);
	if (s == NULL)
		return (-1);

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		count++;
	}
	*len += count;
	return (count);
}
