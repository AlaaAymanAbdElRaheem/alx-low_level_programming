#include "main.h"

/**
 * *_memcpy - copies n bytes from memory area src to memory area dest
 * @dest: a memory area
 * @src: a memory area
 * @n: number of bytes
 * @Return: a memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
  dest[i] = src[i];
return (dest);
}
