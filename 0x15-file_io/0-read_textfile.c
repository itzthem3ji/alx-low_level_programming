#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
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
