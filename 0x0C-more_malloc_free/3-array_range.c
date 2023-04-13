#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers.
 * @min: minimum number
 * @max: maxmum number
 * Return: array of integer
 */

int *array_range(int min, int max)
{
	int *ptr, i, ii = 0, size = 0;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		ptr[ii] = i;
		ii++;
	}
	return (ptr);
}
