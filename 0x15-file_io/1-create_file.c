#include "main.h"
/**
 * create_file - Creates file
 * @filename: file name
 * @text_content: written text
 * Return: success
 **/
int create_file(const char *filename, char *text_content)
{
	int file, i, j = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[j])
			j++;
		i = write(file, text_content, j);
		if (i != j)
			return (-1);
	}

	close(file);

	return (1);
}
