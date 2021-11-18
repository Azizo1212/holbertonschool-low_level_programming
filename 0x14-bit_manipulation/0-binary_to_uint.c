#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _pow - calculate power.
 * @x: int
 * @y: int (power)
 * Return: x pow y
 *
 */

unsigned int _pow(int x, int y)
{
	unsigned int res = x;
	int i;

	if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	for (i = 1; i < y; i++)
		res = res * x;
	return (res);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: string
 * Return: number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	int n, j = 0;

	n = 0;
	if (b == NULL)
		return (0);

	i = strlen(b) - 1;
	while (i != -1)
	{
		if (b[i] == '1')
			n = n + _pow(2, j);

		else if (b[i] != '1' && b[i] != '0')
			return (0);
		j++;
		i--;
	}
	return (n);
}
