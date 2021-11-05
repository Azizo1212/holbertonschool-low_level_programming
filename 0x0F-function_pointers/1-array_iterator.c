#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter of an array.
 * @array: size of array
 * @size: long unsigned int
 * @action: pointer to the function
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	if(!array || !size)
		return;
	for (i = 0; i < size ; i++)
		action(array[i]);
}

