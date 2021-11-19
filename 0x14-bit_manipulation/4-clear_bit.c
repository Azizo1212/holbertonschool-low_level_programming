#include "main.h"
#include <stdio.h>
/**
 * clear_bit - check the code.
 * @n: int(decimal) to check
 * @index: index
 * Return: 1
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
