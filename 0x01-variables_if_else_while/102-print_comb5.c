#include <stdio.h>

/**
 * main - prints combinations of numbers
 * Return: 0
 */

int main(void)
{
	int num;
	int num2;

	for (num = 0; num <= 98; num++)
	{
		for (num2 = 0; num2 <= 99; num2++)
		{
			if (num < num2)
			{
				putchar((num / 10) + '0');
				putchar((num % 10) + '0');
				putchar(' ');
				putchar((num2 / 10) + '0');
				putchar((num2 % 10) + '0');
				if (num != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
