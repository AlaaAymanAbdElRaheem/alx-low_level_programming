#include "main.h"

/**
 * _strspn - gets the length of the initial s
 * @s: string
 * @accept: string
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, ii, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	  for (ii = 0; accept[ii] != '\0'; ii++)
		{
			if (s[i] == accept[ii])
			{
				count++;
				break;
			}
			else if (accept[ii + 1] == '\0')
				return (count);
		}
	}
	return (count);
}
