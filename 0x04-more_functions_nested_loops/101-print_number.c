#include "main.h"

/**
 * print_number - prints number as integer
 * @n: the number
 * Return: void
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		num = n * -1;
		_putchar('-');
	}
	if (num / 10 > 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
