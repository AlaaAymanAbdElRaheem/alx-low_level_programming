#include <stdio.h>

/**
 * main - prints combinations of numbers
 * Return: 0
 */

int main(void)
{
	int num;
	int num2;
	int num3;

	for (num = 0; num < 9; num++)
	{
		for (num2 = 1; num2 <= 9; num2++)
		{
			for (num3 = 2; num3 <= 9; num3++)
			{
				if (num < num2 && num2 < num3)
				{
					if (num != num2 && num2 != num3 && num != num3)
					{
						putchar(num + '0');
						putchar(num2 + '0');
						putchar(num3 + '0');
						if (num + num2 + num3 != 24)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
