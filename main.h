#ifndef MAIN_H
#define MAIN_H

/* IMPORTS */
#include <stdarg.h>

/** Prototypes **/
int _printf(const char *format, ...);
int print_c(va_list args, unsigned long long *len);
int print_s(va_list args, unsigned long long *len);
int print_d(va_list args, unsigned long long *len);
int print_i(va_list args, unsigned long long *len);

/**
  * struct identifier - select the function to process the format
  * @type: -> char: format type.
  * @function: -> pointer to a function taking va_list as argument return int:
  * function to process the format.
  */
typedef struct identifier
{
	char type;
	int (*function)(va_list, unsigned long long *);
} id;

#endif /* MAIN_H */
