#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name
 * @f: fonction pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
