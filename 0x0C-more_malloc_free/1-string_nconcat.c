#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second dtring
 * @n: number of bytes
 * Return: string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0, len2 = 0, j = 0, i, ii;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	if (n >= len2)
		n = len2;
	str = malloc((len + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		str[i] = s1[i];
	for (ii = i; ii < (len + n); ii++)
	{
		str[ii] = s2[j];
		j++;
	}
	str[ii] = '\0';
	return (str);
}
