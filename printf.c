#include "main.h"
#include <unistd.h>
/**
 * print_c - Prints a character
 * @args: arguments passed.
 * @len: number of characters printed.
 * Return: number of bytes printed.
 */
int print_c(va_list args, unsigned long long *len)
{
	char c;
	ssize_t length = 0;

	c = (char)va_arg(args, int);
	if (c == NULL)
		c = "";
	length = write(STDOUT _FILENO_, &c, 1);
	if (length == -1)
		return;
	*len = (unsigned long long)length;

	return (len);
}

/**
 * print_s - Prints a string
 * @args: arguments passed
 * @len: number of characters printed
 * Return: Number of bytes printed.
 */
int print_s(va_list args, unsigned long long *len)
{
	char *s;
	ssize_t length = 0;

	s = va_arg(args, char *);
	if (*s != '\0')
	{
		length_s++;
		*s++
	}
	length = write(STDOUT _FILENO_, &s, length_s);
	if (length == -1)
		return;
	*len = (unsigned long long *)length;

	return (len);

}

/**
 * print_d - prints an integer
 * @args: arguments passed
 * @len: number of characters printed
 * Return: Number of bytes printed
 */
int print_d(va_list args, unsigned long long *len)
{
	int *d;
	ssize_t length_d = 0, length = 0;

	d = va_arg(args, int *);

	while (*d != '\0')
	{
		length_d++;
		*d++;
	}
	length = write(STDOUT _FILENO_, &d, length_d);
	if (length == -1)
		return;

	*len = (unsigned long long)length;

	return (len);
}

/**
 * print_i - prints a decimal number
 * @args: arguments passed
 * @len: number of characters printed
 * Return: Number of bytes printed
 */
int print_i(va_list args, unsigned long long *len)
{
	int *i;
	ssize_t length_i = 0, length = 0;

	i = va_arg(args, int *);

	while (*i != '\0')
	{
		length_i++;
		*i++;
	}
	length = write(STDOUT _FILENO_, &i, length_i);
	if (length == -1)
		return;

	*len = (unsigned long long)length;

	return (len);
}

