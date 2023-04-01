#include "main.h"
#include <stdio.h>

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
