#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10- prints the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: none
 */
void print_alphabet_x10(void)
{
	int i;
	int j = 0;

	for (j = 0; j <= 9; j++)
	{
		for (i = 97; i <= 122; i++)
			_putchar(i);
		_putchar('\n');
	}
}
