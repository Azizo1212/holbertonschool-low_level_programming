#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 *
 * Return: Pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *i;

	if (size == 0)
		return (NULL);

	i = malloc(sizeof(hash_table_t));
	if (!i)
		return (NULL);

	i->size = size;
	i->array = malloc(sizeof(i->array) * size);
	if (i->array == NULL)
		return (NULL);
	return (i);
}
