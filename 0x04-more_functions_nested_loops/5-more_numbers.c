#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int num;
	int time;
	int n;

	for (time = 0; time <= 9; time++)
	{
		for (num = 0; num <= 14; num++)
		{
			n = num;
			if (num > 9)
			{
				_putchar('1');
				n = num % 10;
			}
			_putchar(n + '0');
		}

		_putchar('\n');
	}
}
