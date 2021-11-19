#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: decimal
 * @index: index
 *
 * Return: value of bit at index
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int b = 0;


	if (index > 63)
		return (-1);
	b = n >> index;
	return (b & 1);
}
