#include "main.h"

/**
 * _islower - function checks wither the letter is lowe or not
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return(0); 
}
