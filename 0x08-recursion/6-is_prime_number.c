#include "main.h"

/**
 * is_prime_number - function that checkes if a number is prime or not
 * @n: number
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return(is_prime(n, 2));
}

/**
 * is_prime - check the prime number
 * @n: the number
 * @i: number that will thye number divied by
 * Return: 0 or 1
 */

int is_prime(int n, int i)
{
	if (n == 2 || i == n)
		return (1);
	else if (n < 2 || n % i == 0)
		return (0);
	else
		return (is_prime(n, i + 1));
}
