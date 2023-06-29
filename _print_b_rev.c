#include "main.h"

/**
  * print_b_rev - print binary number reversed
  * @d: number to print
  */
void print_b_rev(unsigned int d)
{
	if (d > 0)
		print_b_rev(d / 2);
	if (d != 0)
		_putchar('0' + (d % 2));
}
