#include "main.h"

/**
 * print_diagonal - print \
 * @n: number of times to priint \
 * Return: void
 */

void print_diagonal(int n)
{
	int sl;
	int m;

	for (sl = 1; sl <= n; sl++)
	{
		for (m = 1; m < sl; m++)	
			_putchar(' ');
		if (n > 0)
			_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
