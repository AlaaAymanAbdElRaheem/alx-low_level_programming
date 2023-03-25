#include <stdio.h>

/**
 * main - the starting point
 * Return: 0
 */

int main(void)
{
	long int num = 612852475143;
	long int prim;

	for (prim = 2; prim  < num; prim++)
	{
		if (num % prim == 0)
			num = num / prim;
	}
	printf("%ld\n", num);
	return (0);
}
