#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s:string
 * @accept: The set of bytes to be searched for.
 *
 * Return: If a set is matched - a pointer to the matched byte.
 *         If no set is matched - NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}

		s++;
	}

	return ('\0');
}
