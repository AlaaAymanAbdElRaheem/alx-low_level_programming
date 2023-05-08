#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: pinter to the name of the file
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);


	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[len])
		len++;

	w = write(fd, text_content, len);
	if (w == -1 || w != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
