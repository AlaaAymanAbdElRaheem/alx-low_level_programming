#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: count of arguments
 * @argv: value of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		if (cents < 0)
			printf("%d\n", 0);
		else
		{
			if (cents - 25 >= 0)
			{
				cents -= 25;
				coins++;
			}
			if (cents - 10 >= 0)
			{
				cents -= 10;
				coins++;
			}
			if (cents - 5 >= 0)
			{
				cents -= 5;
				coins++;
			}
			if (cents - 2 >= 0)
			{
				cents -= 2;
				coins++;
			}
			if (cents - 1 >= 0)
			{
				cents -= 1;
				coins++;
			}
		}
	}
	printf("%d\n", coins);
	return (0);
}
