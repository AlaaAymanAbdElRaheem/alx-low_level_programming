#include "main.h"

/**
 * *_strcat - concatinate two strings
 * @dest: first string
 * @src: second one
 * Return: the new string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len = 0;
	int len2 = 0;

	for (i = 0; dest[i] != '\0'; i++)
		len++;
	for (i = 0; src[i] != '\0'; i++)
		len2++;
	for (i = 0; i < len2; i++)
		dest[len++] = src[i];
	return (dest);
}
