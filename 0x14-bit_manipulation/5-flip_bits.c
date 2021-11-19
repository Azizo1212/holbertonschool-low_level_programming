#include <stdio.h>


/**
 * flip_bits - returns the number of bits
 * @n: decimal
 * @m: bit
 * Return: x
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x;
	unsigned long int y;

	x = 0;
	y = n ^ m;
	while (y)
	{
		x += y & 1;
		y = y >> 1;
	}
	return (x);
}
