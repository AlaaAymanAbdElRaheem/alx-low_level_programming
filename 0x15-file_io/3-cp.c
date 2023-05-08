#include "main.h"

/**
 *  main - program that copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int in, out, r, w, c1, c2;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	in = open(argv[1], O_RDONLY);
	r = read(in, buf, 1024);
	if (r == -1 || in == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}	

	out = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (r > 0)
	  {
		w = write(out, buf, r);
		if (w == -1 || out == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		r = read(in, buf, 1024);
		if (r == -1 || in == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	  }

	c1 = close(in);
	c2 = close(out);
	if (c1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", c1);
		exit(100);
	}
	else if (c2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", c2);
		exit(100);
	}
	return (0);
}
