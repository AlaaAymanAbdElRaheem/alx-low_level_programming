#include "main.h"

/**
 * times_table - prints a time table
 * Return: void
 */

void times_table(void)
{
	int num, mult, result;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (mult = 1; mult <= 9; mult++)
		{
			result = (num * mult);
			if (result <= 9)
				_putchar(result + '0');
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			if (mult < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
