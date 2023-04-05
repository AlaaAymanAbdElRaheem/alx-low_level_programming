#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: the number
 * Return: the natural square root of a number of that number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	return (sqrt_guess(n, 1));
}

/**
 * sqrt_guess - gussing the sequare root
 * @n: number
 * @g: a guessed number
 * Return: the natural square root
 */

int sqrt_guess(int n, int g)
{
	if (g * g == n)
		return (g);
	else if (g * g > n)
		return (-1);
	else
		return (sqrt_guess(n, g + 1));
}
