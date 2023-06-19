#include "main.h"

/**
 * *_strncpy - copies string
 * @dest: where the string is copied
 * @src: the string which will be copied
 * @n: number of charcters to be copied
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len = 0;

	for (i = 0; src[i] != '\0'; i++)
		len++;
	for (i = 0; i < len && i < n; i++)
		dest[i] = src[i];
	for (i = len; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
