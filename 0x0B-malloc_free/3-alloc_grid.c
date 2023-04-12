#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - return 2D array of integers
 * @width: number of raws
 * @height: number of columes
 * Return: 2D arry of int
 */

int **alloc_grid(int width, int height)
{
	int **ar, i, ii;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = malloc(height * sizeof(int *));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ar[i] = (int *) malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			for (ii = 0; ii < i; ii++)
				free(ar[i]);
			free(ar);
			return (NULL);
		}
		for (ii = 0; ii < width; ii++)
			ar[i][ii] = 0;
	}
	return (ar);
}
