#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string
 * Return: the result
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int i, j = 0;

	while (s[j] != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[j] == accept[i])
			{
				x++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (x);
		}
		j++;
	}
	return (x);
}
