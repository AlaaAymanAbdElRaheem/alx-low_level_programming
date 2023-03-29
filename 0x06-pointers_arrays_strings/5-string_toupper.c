#include "main.h"

/**
 * *string_toupper -capitalize lower case character
 * @str:the string
 * Return: the string
 */

char *string_toupper(char *str)
{
	int i;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
