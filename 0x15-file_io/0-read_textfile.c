#include "main.h"

/**
 * read_textfile - reads a text file & prints it to the POSIX standard output.
 * @filename: pointer to the file name
 * @letters: number ofletters it should read and print
 * Return: the actual number of letters it could read and print or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *c = malloc(sizeof(char) * letters);
	size_t r, w;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	if (c == NULL)
	{
		close(fd);
		return (0);
	}
	r = read(fd, c, letters);

	if (r > 0)
	{
		w =  write(1, c, r);
		if ((int)w == -1)
		{
			free(c);
			close(fd);
			return (0);
		}
	}
	else
	{
		free(c);
		close(fd);
		return (0);
	}

	close(fd);
	free(c);
	return (r);
}
