#include "main.h"
#include <stdio.h>

/**
 * create_file - function that creates a file
 *
 * @filename: file name
 * @text_content: text content
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	wr = write(fd, text_content, strlen(text_content));

	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
