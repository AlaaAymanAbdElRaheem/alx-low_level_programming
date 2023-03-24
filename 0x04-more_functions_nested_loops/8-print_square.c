#include "main.h"

/**
 * print_square - function draws a square
 * @size: the size of the square
 * Return: void
 */

void print_square(int size)
{
	int s;
	int sl;

	for (s = 1; s <= size; s++)
	{
		for (sl = 1; sl <= size; sl++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
