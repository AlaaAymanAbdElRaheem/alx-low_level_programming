#include "main.h"

/**
 * print_triangle - drawd a triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int s, space, hash;

	for (s = 1; s <= size; s++)
	{
		for (space = size - s; space > 0; space--)
			_putchar(' ');
		for (hash = 1; hash <= s; hash++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
