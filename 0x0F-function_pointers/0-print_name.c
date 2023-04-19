#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name -  function that prints a name.
 * @name: pointer to the name
 * @f: pointer to a void function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
