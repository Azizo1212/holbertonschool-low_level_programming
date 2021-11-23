#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX
 *
 * @filename: file name
 * @letters: number of letters
 * Return: size
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
		return (0);

	rd = read(fd, buffer, letters + '\0');
	close(fd);

	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1)
		return (0);
	free(buffer);
	return (rd);
}
