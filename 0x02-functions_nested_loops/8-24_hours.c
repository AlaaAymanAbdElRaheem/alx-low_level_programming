#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: void
 */

void jack_bauer(void)
{
	int hour, mint;

	for (hour = 0; hour < 24; hour++)
	{
		for (mint = 0; mint < 60; mint++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((mint / 10) + '0');
			_putchar((mint % 10) + '0');
			_putchar('\n');
		}
	}
}
