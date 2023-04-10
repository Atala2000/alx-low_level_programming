#include "main.h"

/**
 * main - main
 * @argc: args
 * @argv: array
 * Return: return
 **/
int main(int argc, char *argv[])
{
	int fr_a, fr_b, x, y, z;
	char bf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fr_a = open(argv[1], O_RDONLY);
	if (fr_a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fr_b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = read(fr_a, bf, BUFSIZ)) > 0)
	{
		if (fr_b < 0 || write(fr_b, bf, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fr_a);
			exit(99);
		}
	}
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	y = close(fr_a);
	z = close(fr_b);
	if (y < 0 || z < 0)
	{
		if (y < 0)
			dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fr_a);
		if (z < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fr_b);
		exit(100);
	}
	return (0);
}
