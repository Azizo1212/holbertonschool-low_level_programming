#include <stdio.h>
#include "main.h"
/**
 * _islalpha- checks for lowercase and uppercase character.
 *
 * @c: character to test
 * Return: 1 if lowercase or uppercase 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
