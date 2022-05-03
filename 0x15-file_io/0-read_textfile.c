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
	ssize_t i, y;
	char *bufr;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	bufr = malloc(sizeof(char) * (letters));
	if (!bufr)
		return (0);

	i = read(fd, bufr, letters);
	y = write(STDOUT_FILENO, bufr, i);

	close(fd);

	free(bufr);

	return (y);
}