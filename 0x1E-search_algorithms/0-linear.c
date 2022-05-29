#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - function to linearly search x in arr[]
 * @array: pointer
 *
 * @size: size
 * @value: value to search
 * Return: index where value located or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);

	}
	return (-1);

}
