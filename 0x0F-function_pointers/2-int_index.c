#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -  searches for an integer.
 * @size: size of array
 * @cmp: function
 * @array: array
 * Return: i.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

