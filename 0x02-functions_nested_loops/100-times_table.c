#include "main.h"

/**
 * print_times_table - prints a time table of n
 * @n: the number
 */

void print_times_table(int n)
{
	int num, mult, result;

	if (n < 0 || n > 15)
		return;
	for (num = 0; num <= n; num++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		for (mult = 1; mult <= n; mult++)
		{
			result = (num * mult);
			if (result <= 9)
			{
				_putchar(32);
				_putchar(32);
				_putchar(result + '0');
			}
			else if (result >= 90)
			{
				_putchar(32);
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar((result / 100) + '0');
				_putchar(((result - 100) / 100) + '0');
				_putchar((result % 10) + '0');
			}
			if (mult < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
