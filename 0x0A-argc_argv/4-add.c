#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main function
 * @argc: count of arguments
 * @argv: value of arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, ii, sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (ii = 0; argv[i][ii] != '\0'; ii++)
			{
				if (!(isdigit(argv[i][ii])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
