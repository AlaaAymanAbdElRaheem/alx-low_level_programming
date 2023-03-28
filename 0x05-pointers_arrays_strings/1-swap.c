#include "main.h"

/**
 * swap_int - funtion that swap two integers
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
int f = *a;
int s = *b;

*a = s;
*b = f;
}
