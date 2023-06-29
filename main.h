#ifndef MAIN_H
#define MAIN_H

/* IMPORTS */
#include <stdarg.h>

/** Prototypes **/
int _printf(const char *format, ...);
int print_c(va_list args, unsigned long *len);
int print_s(va_list args, unsigned long *len);
int print_d(va_list args, unsigned long *len);
int print_i(va_list args, unsigned long *len);
int print_b(va_list args, unsigned long *len);
int print_u(va_list args, unsigned long *len);
int print_o(va_list args, unsigned long *len);
int print_x(va_list args, unsigned long *len);
int print_X(va_list args, unsigned long *len);
int print_S(va_list args, unsigned long *len);
int print_p(va_list args, unsigned long *len);
int print_r(va_list args, unsigned long *len);
int print_R(va_list args, unsigned long *len);

/** Helper functions **/
int _putchar(char);
char *_dtos(long);
void print_b_rev(unsigned int d);

/**
  * struct identifier - select the function to process the format
  * @type: -> char: format type.
  * @function: -> pointer to a function taking va_list as argument return int:
  * function to process the format.
  */
typedef struct identifier
{
	char type;
	int (*function)(va_list, unsigned long *);
} id;

#endif /* MAIN_H */
