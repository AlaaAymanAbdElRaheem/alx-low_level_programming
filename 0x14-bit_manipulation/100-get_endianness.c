#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int n = 0x49374;
	char *c = (char *) &n;

	if (*c == 0x49)
		return (0);
	else
		return (1);
}
