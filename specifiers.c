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

/**
 * print_d - Prints integer numbers
 * @args: arguments passed
 * @len: number of bytes printed.
 * Return: Number of characters printed
 */
int print_d(va_list args, unsigned long int *len)
{
	int i = 0;
	int num, temp, digit;
	int magnitude = 1;

	num = va_arg(args, int);

	if (num < 0)
	{
		_putchar('-');
		*len += 1;
		i++;
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
		*len += 1;
		i++;
	}
	while (temp != 0)
	{
		magnitude *= 10;
		temp /= 10;
	}
	while (magnitude > 1)
	{
		magnitude /= 10;
		digit = num / magnitude;
		if (digit != 0)
		{
			_putchar(digit + '0');
			*len += 1;
			i++;
		}
		num -= digit * magnitude;
	}
	return (i);
}

/**
 * print_i - prints a decimal number
 * @args: arguments passed
 * @len: number of bytes printed
 * Return: Number of characters printed
 */
int print_i(va_list args, unsigned long int *len)
{
	int i = 0;
	int magnitude = 1;
	int num, digit, temp;

	num = va_arg(args, int);

	if (num < 0)
	{
		_putchar('-');
		*len += 1;
		i++;
	}
	if (num == 0)
	{
		_putchar(0);
		*len += 1;
		i++;
	}
	while (temp != 0)
	{
		magnitude *= 10;
		temp /= 10;
	}
	while (magnitude > 1)
	{
		magnitude /= 10;
		digit = num / magnitude;
		if (digit != 0)
		{
			_putchar(digit + '0');
			*len += 1;
			i++;
		}
		num -= digit * magnitude;
	}
	return (i);
}
