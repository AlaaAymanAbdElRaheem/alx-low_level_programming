#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the binary number
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0, multi = 1;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	for (len = len - 1; len >= 0; len--)
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);
		result += ((b[len] - '0') * multi);
		multi *= 2;
	}
	return (result);
}
