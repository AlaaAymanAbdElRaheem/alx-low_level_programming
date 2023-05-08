#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: pinter to the name of the file
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1
 */

int create_file(const char *filename, char *text_content)
{
  int fd, len = 0;

  if (filename == NULL)
    return (-1);

  fd = creat(filename, O_WRONLY | O_CREAT | 0_TRUNC | 0600);
  if (fd == -1)
    return (-1);

  while (text_content[len])
    len++;

  

  
}
