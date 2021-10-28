#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
    int **c;

    c = malloc(b);
	if (c == NULL)
		exit(98);
    return (c);
}
