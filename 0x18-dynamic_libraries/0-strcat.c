#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function that concatenates two strings.
 * @dest: first entry string
 * @src: second entry string
 * Return: dest string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
