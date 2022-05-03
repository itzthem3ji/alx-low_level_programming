#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i, y;
	char *bufr;
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	bufr = malloc(sizeof(char) * letters);
	if (!bufr)
		return (0);
	i = read(fd, bufr, letters);
	if (i < 0)
	{
		free(bufr);
		return (0);
	}
	bufr[i] = '\0';
	close(fd);
	y = write(STDOUT_FILENO, bufr, i);
	if (y < 0)
	{
		free(bufr);
		return (0);
	}
	free(bufr);
	return (y);
}
