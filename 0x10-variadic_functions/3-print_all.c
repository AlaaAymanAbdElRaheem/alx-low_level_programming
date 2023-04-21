#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything.
 * @format: arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j;
	char *sep = "";
	struct print_type func_type[] = {
		{"i", print_int},
		{"f", print_float},
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(list, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*func_type[j].t == format[i])
			{
				printf("%s", sep);
				func_type[j].print_t(list);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");

	va_end(list);
}

/**
 * print_int - function that prints integers.
 * @list: arguments
 * Return: void
 */

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - function that prints anything.
 * @list: arguments
 * Return: void
 */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_char - function that prints charcter.
 * @list: arguments
 * Return: void
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_string - function that prints string.
 * @list: arguments
 * Return: void
 */

void print_string(va_list list)
{
	char *str = va_arg(list, char*);

        str != NULL ? printf("%s", str) : printf("(nil)");
}
