#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdarg.h>

/**
 * struct print_type - sturcture
 * @t: pointer to string of the type
 * @print_t: pointer to a function
 */

struct print_type
{
char *t;
void (*print_t)(va_list);
};

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_int(va_list list);
void print_float(va_list list);
void print_char(va_list list);
void print_string(va_list list);

#endif
