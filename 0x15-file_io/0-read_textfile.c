#include "main.h"
/**
 * read_textfile - text file is read
 * @filename: name of file
 * @letters: letters
 * Return: value
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int x, y;
	char *bf;

	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);
	bf = malloc(sizeof(char) * letters);
	if (!bf)
		return (0);
	x = read(file, bf, letters);
	if (x < 0)
	{
		free(bf);
		return (0);
	}
	bf[x] = '\0';
	close(file);
	y = write(STDOUT_FILENO, bf, x);
	if (y < 0)
	{
		free(bf);
		return (0);
	}
	free(bf);
	return (y);
}
