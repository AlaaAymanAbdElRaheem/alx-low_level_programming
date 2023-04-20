#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function.
 * @argc: number of elements
 * @argv: value of elements
 * Return: result
 */

int main(int argc, char *argv[])
{
	int i;
	char *ptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (argv[1] < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < atoi(argv[1]); i++)
		printf("%02hhx", ptr[i]);
	printf("\n");

	return (0);
}
