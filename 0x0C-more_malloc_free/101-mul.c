#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: the string
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}

/**
 * is_num - checks if it is a digit or not
 * @c: char
 * Return: 0 or 1
 */

int is_num(char c)
{
	return(c >= '0' && c <= '9');
}

/**
 * into_int - change from string to integers
 * @str: string
 * Return: int
 */

int into_int(char *str)
{
	int i, result = 0, sign = 1, first = 0;

	if (str[0] == '-')
	{
		sign = -1;
		first ++;
	}
	for (i = first; str[i] != '\0'; i++)
	{
		if (!is_num(str[i])
		{
			_puts("Error\n");
			exit(98);
		}
		else
		result = result * 10 + (str[i] - '0');
	}
	return (result * sign);
}

 /**
 * _strlen - Returns the length of a string
 * @s: the string
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	return (count);
}

/**
 * *infinite_add - a function that adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: where the result will be added
 * @size_r: buffer size
 * Return: the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, i, carry = 0, result;
	int num1 = 0, num2 = 0, len = 0;

	for (i = 0; n1[i] != '\0'; i++)
		len1++;
	for (i = 0; n2[i] != '\0'; i++)
		len2++;
	len = (len1 > len2) ? len1 : len2;
	if (len >= size_r)
		return (0);
	for (i = len - 1; i >= 0; i--)
	{
		len1--;
		len2--;
		if (len1 >= 0)
			num1 =  n1[len1] - '0';
		else
			num1 = '0';
		if (len2 >= 0)
			num2 =  n2[len2] - '0';
		else
			num2 = 0;
		result = num1 + num2 + carry;
		carry = (result >= 10) ? result / 10 : 0;
		r[i] = (result % 10) + '0';
	}
	if (carry == 1)
	{
		r[len + 1] = '\0';
		if (len + 2 > size_r)
			return (0);
		while (len-- > 0)
			r[len + 1] = r[len];
		r[0] = carry + '0';
	}
	else
		r[len] = '\0';
	carry = 0;
	return (r);
}


/**
 * *multi - multiply two integers
 * @num1: first int
 * @num2: second one
 * @Return: array of the result
 */

int *multi(int num1, int num2, int size)
{
	int result;
	int *r;

	result = malloc(size * sizeof(int));
	while (num2 > 0)
	{
	  result = *infinite_add(num1, num1, r, size); 
	}
	return (result);
}

/**
 * main - the start of the programe
 * @argc: number of elements
 * @argv: value of elements
 * @Return: int
 */

int main(int argc, char *argv[])
{
	int num, num2, result;
	int len1 = 0, len2 = 0, len = 0;

	if (argc != 2)
	{
		_puts("Error\n");
		exit(98);
	}

	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	len = len1 + len2;
	num = into_int(argv[1]);
	num2 = into_int(argv[2]);

	if (num < 0 || num2 < 0)
	{
		_puts("Error\n");
		exit(98);
	}
	result =(multi(num, num2, len);
}
