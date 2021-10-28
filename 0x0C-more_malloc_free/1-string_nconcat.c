#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat -  a function that concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: the first n bytes of s2
 * Return: a pointer to the new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, z = 0, e;
	char *c;

	while (s1 && s1[a])
		a++;
	while (s2 && s2[z])
		z++;
	if (n < z)
	{
		c = malloc(sizeof(char) * (a + n + 1));
		e = a + n;
	}
	else
	{
		c = malloc(sizeof(char) * (a + z + 1));
		e = a + z;
	}
	if (!c)
		return (NULL);
	for (z = 0; z < a; z++)
		c[z] = s1[z];
	z = 0;
	for (; a <= e; a++)
	{
		c[a] = s2[z++];
	}
	a--;
	c[a] = '\0';
	return (c);
}
