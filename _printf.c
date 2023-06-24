#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>

/**
  * id_select - iterate over the list of formats and
  * select a function to execute
  * @a: string to process
  * @args: argument list
  * @len: keep track of printed string length
  */
void id_select(const char *a, va_list args, unsigned int *len)
{
	int i;
	id id_array[] = {
		{'c', _cprint},
		{'s', _sprint},
		{'i', _iprint},
		{'d', _dprint},
		{'%', _ctprint},
		{'\0', NULL}
	};

	if (a == NULL || args == NULL)
		return;
	i = 0;
	while (id_array[i].type)
	{
		if (*a == id_array[i].type)
		{
			id_array[i].function(args, len);
			break;
		}
		i++;
	}
}
