#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given each element of an array.
 * @array: array of integers
 * @size: size of the array
 * @action:  pointer to the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
