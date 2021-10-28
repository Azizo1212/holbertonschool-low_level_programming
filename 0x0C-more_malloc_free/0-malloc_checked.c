#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked -  a function that allocates memory using malloc.
 * @b: the space to allocate
 *
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	int **c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	return (c);
}
