#include "main.h"

/**
 * print_diagonal - Draws a diagonal line 
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int a, s;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (s = 0; s < a; s++)
				_putchar(' ');
			_putchar('\\');

			if (a == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
