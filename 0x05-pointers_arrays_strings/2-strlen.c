#include "main.h"

/*
 * _strlen - Returns the length of a string
 * @s: the string
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
	int i;
	int count;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	return (count);
}
