#include <stdlib.h>
#include "main.h"
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the string
 * @c: The char
 * Return: NULL if size = 0
 *		Otherwise - a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *chs;
	unsigned int i;

	if (size == 0)
		return (NULL);
	chs = malloc(sizeof(char) * size);
	if (chs == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		chs[i] = c;
	return (chs);
}
