#include <stdio.h>

/**
 * print_to_98 - ascinding or discending number to 98
 * @n: the starting number
 * Return: void
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d", n);
		if (n < 98)
			printf(", ");
		n++;
	}
	while (n > 98)
	{
		printf("%d", n);
		if (n > 98)
			printf(", ");
		n--;
	}
	printf("%d", 98);
	printf("\n");
}
