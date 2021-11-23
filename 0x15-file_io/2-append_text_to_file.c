#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: file name
 * @text_content: text
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);
	wr = write(fd, text_content, strlen(text_content));

	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
