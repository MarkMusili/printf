#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the code
 * Return: 0 for success
 */
int main()
{
	int count = _printf("Hello, %s! Today is %c\n", "Alice", 'A');
	printf("\nNumber of characters printed: %d\n", count);
	return 0;
}
