#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: integer to test
 * Return: -n if n is negative
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
