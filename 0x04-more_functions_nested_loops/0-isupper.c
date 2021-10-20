#include "main.h"
#include <stdio.h>

/**
 * _isupper- checks for uppercase character.
 * @c:int
 * Return:1 if c is uppercase or 0 if otherwise
 */

int _isupper(int c)
{

	if ( c >= 'A' &&  c <= 'Z')
		return (1);
	else
		return (0);
}
