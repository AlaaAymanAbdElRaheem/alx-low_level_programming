#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: value of arguments
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i, ii, len = 0, ind = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (ii = 0; av[i][ii] != '\0'; ii++)
			len++;
	}
	len += ac + 1;
	str = (char *) malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (ii = 0; av[i][ii] != '\0'; ii++)
		{
			str[ind] = av[i][ii];
			ind++;
		}
		str[ind] = '\n';
		ind++;
	}
	return (str);
}
