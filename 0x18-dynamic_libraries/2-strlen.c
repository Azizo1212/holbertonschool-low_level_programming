#include <stdio.h>
#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: The string to enter
 *
 * Return: strlen success
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
