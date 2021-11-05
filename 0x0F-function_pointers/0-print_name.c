#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator -
 * @name: name of the person
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if(!f || !name)
		return;
	(*f)(name);
}
