#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second one
 * Return: 0 or >0 or <0
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int len = 0;
	int len2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
		len++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	for (i = 0 ; i < len || i < len2; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
