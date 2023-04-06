#include "main.h"

/**
 * _strlen_recursion -  function that returns the length of a string.
 * @s: string
 * Return: lenght of a string
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n += _strlen_recursion(s + 1) + 1;
	}
	return (n);
}

/**
 * palindrome - checks if a given string is a palindrome
 * @s: string
 * @len: length of  the string
 * @i: index
 * Return: 0 or 1
 */


int palindrome(char *s, int len, int i)
{
	if (s[i] == s[len - i - 1])
	{
		if (i == len / 2)
			return (1);
		return (palindrome(s, len, i + 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if a given string is a palindrome
 * @s: string
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len == 0)
		return (1);
	return (palindrome(s, len, 0));
}

