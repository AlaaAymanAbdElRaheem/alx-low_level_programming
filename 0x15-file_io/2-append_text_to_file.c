#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename:  the name of the file
 * @text_content: is the NULL terminated string
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL || text_content == NULL)
		return (-1);

	fd = open(filename, O_APPEND);
	if (fd == -1)
		return (-1);

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
