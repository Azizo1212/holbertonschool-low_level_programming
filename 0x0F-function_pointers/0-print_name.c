#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator -
 * @name: name of the person
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	for (size_t i = 0, i < size , i++)
		action(array[i]);
}
