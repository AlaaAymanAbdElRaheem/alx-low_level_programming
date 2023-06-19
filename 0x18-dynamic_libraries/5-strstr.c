#include "main.h"

/**
 * *_strstr - finds the first occurrence of a word in the string haystack
 * @haystack: string
 * @needle: string
 * Return: string
 */

char *_strstr(char *haystack, char *needle)
{
	char *p, *p1;

	while (*haystack != '\0')
	{
		p = haystack;
		p1 = needle;
		while (*p == *p1 && *p1 != '\0')
		{
			p1++;
			p++;
		}
		if (*p1 == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
