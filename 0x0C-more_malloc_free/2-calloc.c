#include "main.h"
#include <stdio.h>

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: memory area
 * @b: constant byte
 * @n: the first n bytes of the memory area to be filled
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: elements of array
 * @size: size of each nmemb
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
