#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: string
 */

char *str_concat(char *s1, char *s2)
{
	int i, ii, j = 0, size = 0, len = 0, len2 = 0;
	char *con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	size = len + len2;
	con = (char *) malloc(size + 1 * sizeof(char));
	if (con == NULL)
		return (NULL);
	for (ii = 0; ii < len; ii++)
		con[ii] = s1[ii];
	for (i = ii; i < size; i++)
	{
		con[i] = s2[j];
		j++;
	}
	return (con);
}
