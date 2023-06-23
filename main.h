#ifndef MAIN_H
#define MAIN_H

/* IMPORTS */
#include <stdarg.h>

int _printf(const char *format, ...);

/* XXX */
int _putchar(char);

/**
  * struct identifier - select the function to process the format
  * @type: -> char: format type.
  * @function: -> pointer to a function taking va_list as argument return int:
  * function to process the format.
  */
typedef struct identifier
{
	char type;
	int (*function)(va_list, unsigned int *);
} id;

#endif /* MAIN_H */
