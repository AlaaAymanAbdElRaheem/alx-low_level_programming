#include "main.h"

/**
 * _islower - function checks wither the letter is lowe or not
 * @c: The character to be checked
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
