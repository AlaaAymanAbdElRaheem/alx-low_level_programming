#include "main.h"

/**
 * *leet - a function that encodes a string into 1337
 * @s: the string
 * Return: the strin=
 */

char *leet(char *s)
{
	int i, in;
	char letters[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (in = 0; in < 10; in++)
		{
			if (s[i] == letters[in])
			{
				s[i] = num[in];
				break;
			}
		}
	}
	return (s);
}
