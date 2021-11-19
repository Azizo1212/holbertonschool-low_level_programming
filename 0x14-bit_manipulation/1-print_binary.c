#include <unistd.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: decimal
 *
 * Return: none
 */

void print_binary(unsigned long int n)
{
	size_t d = n;

	if (d > 1)
		print_binary(d >> 1);
	putchar((d & 1) + '0');

}
