#include "main.h"

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int a, w;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (w = 0; w < size; w++)
				_putchar('#');

			if (a == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
