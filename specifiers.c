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
int print_c(va_list args, unsigned long long *len)
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
int print_s(va_list args, unsigned long long *len)
{
	char *s;
	int i = 0;

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

/**
 * print_d - print an integer
 * @args: number to be printed
 * @len: length of the format
 * Return: length of the variable or -1
 */
int print_d(va_list args, unsigned long long *len)
{
	long long d;
	char *dtos;
	int i = 0;

	if (!args)
		return (-1);
	d = va_arg(args, int);
	if (d == NULL)
		return (-1);
	dtos = _itos(d);
	while (dtos[i])
	{
		_putchar(dtos[i]);
		i++;
	}
	*len += i;
	return (i);
}

/**
 * print_i - print an decimal number
 * @args: number to be printed
 * @len: length of the format
 * Return: length of the variable or -1
 */
int print_i(va_list args, unsigned long long *len)
{
	double i;
	char *itos;
	int k = 0;

	if (!args)
		return (-1);
	i = va_arg(args, double);
	if (i == NULL)
		return (-1);
	itos = _itos(d);
	while (itos[k])
	{
		_putchar(itos[k]);
		k++;
	}
	*len += k;
	return (k);
}
