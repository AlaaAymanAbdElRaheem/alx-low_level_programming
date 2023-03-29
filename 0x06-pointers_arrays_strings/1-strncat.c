#include "main.h"

/**
 * *_strncat - concatinate two strings
 * @dest: first string
 * @src: second one
 * @n: number of bytes
 * Return: the string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = 0;
	int len2 = 0;

	for (i = 0; dest[i] != '\0'; i++)
		len++;
	for (i = 0; src[i] != '\0'; i++)
		len2++;
	for (i = 0; i < len2 && i < n; i++)
		dest[len++] = src[i];
	return (dest);
}
