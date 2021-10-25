#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: copy to
 * @src: copy from
 * @n: chars to copy
 * Return: dest pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
