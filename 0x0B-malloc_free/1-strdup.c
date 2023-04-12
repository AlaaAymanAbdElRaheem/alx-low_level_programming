#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - copy a string
 * @str: string
 * Return: string
 */

char *_strdup(char *str)
{
	int i, ii, len = 0;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		len++;
	dup = (char *) malloc(i * sizeof(char));
	if (dup == NULL)
		return (NULL);
	for (ii = 0; ii < len; ii++)
		dup[ii] = str[ii];
	return (dup);
}
