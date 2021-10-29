#include "main.h"

/**
 * *array_range - create array from previous array.
 * @min: start of the new array
 * @max: last element of the new array
 *
 * Return: a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *c;
	int i;

	if (min > max)
		return (NULL);
	c = malloc(sizeof(int) * (max - min + 1));
	if (c == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		c[i] = min++;
	return (c);
}
