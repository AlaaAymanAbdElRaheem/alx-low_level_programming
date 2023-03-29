#include "main.h"

/**
 * _atoi - convert string to integers
 * @s: the string
 * Return: the converted integer
 */

int _atoi(char *s)
{
	int sign = 1;
	int i, digit;
	int result = 0;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			result = result * 10 + digit;
		}
		else if (result != 0)
			break;
	}
	return (result * sign);
}
