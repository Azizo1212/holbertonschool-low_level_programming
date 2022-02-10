#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: hash table
 * @key: key
 * Return: Value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int x;
	hash_node_t *y;

	if (ht == NULL || key == NULL)
		return (NULL);

	x = key_index((const unsigned char *)key, ht->size);
	y = ht->array[x];
	while (y)
	{
		if (strcmp(y->key, key) == 0)
			return (y->value);
		y = y->next;
	}
	return (NULL);
}
