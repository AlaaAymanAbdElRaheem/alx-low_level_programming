#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - unction that allocates memory for an array, using malloc.
 * @nmemb: elemnts
 * @size: number of bytes
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *cptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	cptr = ptr;
	for (i = 0; i < (nmemb * size); i++)
		cptr[i] = 0;
	return (ptr);
}
