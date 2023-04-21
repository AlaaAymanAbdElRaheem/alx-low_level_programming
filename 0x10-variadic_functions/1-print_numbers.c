#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - unction that prints numbers, followed by a new line.
 * @separator: a seprator
 * @n: constant of number of elements
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i != n - 21 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
