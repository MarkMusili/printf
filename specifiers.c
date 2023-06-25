#include "main.h"
#include <stdio.h>
/**
 * print_d - Prints an integer
 * @args: arguments given
 * @len: Number of bytes printed
 * Return: Number of arguments printed.
 */
int print_d(va_list args, unsigned long long *len)
{
	int *d, count = 0;

	*d = va_arg(args, int *);
	while (d != NULL && *d != '\0')
	{
		_putchar(*d);
		count++;
	}
	*len = count;
	return (count);

}
/**
 * print_i - Prints a decimal
 * @args: arguments given
 * @len: Number of bytes printed
 * Return: Number of arguments given.
 */
int print_i(va_list args, unsigned long long *len)
{
	return (print_d(args));
}
