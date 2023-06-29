#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  * print_b - print a
  * @args: argument
  * @len: length of the buffer.
  * Return: length of the arg
  */
int print_b(va_list args, unsigned long *len)
{
	unsigned int d = va_arg(args, unsigned int);

	print_b_rev(d);
}

/**
  * print_u - print a
  * @args: argument
  * @len: length of the buffer.
  * Return: length of the arg
  */
int print_u(va_list args, unsigned long *len)
{
	return 0;
}

/**
  * print_o - print a
  * @args: argument
  * @len: length of the buffer.
  * Return: length of the arg
  */
int print_o(va_list args, unsigned long *len)
{
	return 0;
}

/**
  * print_x - print a
  * @args: argument
  * @len: length of the buffer.
  * Return: length of the arg
  */
int print_x(va_list args, unsigned long *len)
{
	return 0;
}

/**
  * print_X - print a
  * @args: argument
  * @len: length of the buffer.
  * Return: length of the arg
  */
int print_X(va_list args, unsigned long *len)
{
	return 0;
}
