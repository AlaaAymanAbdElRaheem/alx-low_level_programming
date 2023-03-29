#include "main.h"

/**
 * *cap_string - captiliaze every first charcter of a word
 * @s: the string
 * Return: the string
 */

char *cap_string(char *s)
{
	int i;
	int flag = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' ||
		s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' ||
		s[i] == '\"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
			flag = 1;
		else if (s[i] >= 'a' && s[i] <= 'z' && flag == 1)
		{
			s[i] -= 32;
			flag = 0;
		}
		else
			flag = 0;
	}
	return (s);
}
