#include "main.h"

/**
 * flip_bits - git the number of bits you would need to flip
 *          to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	int count = 0;

	num = n ^ m;

	while (num)
	{
		if (num & 1)
			count++;
		num >>= 1;
	}
	return (count);
}
