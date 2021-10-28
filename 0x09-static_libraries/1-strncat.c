#include "main.h"
#include <stdio.h>

/**
 * _strncat - a function that concatenates two strings.
 * it will use at most n bytes from src
 * @dest: first entry string
 * @src: second entry string
 * @n: third entry integer
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
