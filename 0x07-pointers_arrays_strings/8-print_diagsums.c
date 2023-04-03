#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - gets sum of the two diagonals of a square matrix
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int  sum = 0, sum1 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum += *(a + i * size + i);
		sum1 += *(a + i * size + size - i - 1);
	}
	printf("%d, %d\n", sum, sum1);
}
