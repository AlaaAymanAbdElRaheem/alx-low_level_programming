#include "main.h"

/**
 * print_diagonal - print /
 * @n: number of times to print /
 * Return: void
 */

void print_diagonal(int n)
{
	int m;

	for (m = n; m > 0; m--)
		_putchar(' ');
	_putchar('\\');
	_putchar('\n');
}
