#include "main.h"

/**
 * rev_string - function reverse the string
 * @s: the string
 * Return: void
 */

void rev_string(char *s)
{
	int i, h_len;
	int count = 0;
	char c;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	h_len = count / 2;
	i = 0;

	while (h_len--)
	{
		c = s[count - i - 1];
		s[count - i - 1] = s[i];
		s[i] = c;
		i++;
	}
}
