#include "main.h"
#include <stdio.h>

/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: first entry string
 * @s2: second entry string
 *
 * Return: integer en utilisant l'ordre lexicographique
 * 0 if they're equal, more if s1 is greater, else less than 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
