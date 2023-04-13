#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - function that reallocates a memory block using malloc and free
 * @ptr: old memory block
 * @old_size: size of the old memory block
 * @new_size: size of the new one
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *cptr;
	unsigned int i;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	cptr = ptr;
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr[i] = cptr[i];
	free(ptr);
	return (new_ptr);
}
