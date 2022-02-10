#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_set - add elements to hash table.
 *
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i, size;
	hash_node_t *y, *x;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	size = ht->size;
	i = key_index((const unsigned char *)key, size);
	x = ht->array[i];
	while (x)
	{
		if (x && strcmp(key, x->key) == 0)
		{
			free(x->value);
			x->value = strdup(value);
			if (x->value == NULL)
				return (0);
			return (1);
		}
		x = x->next;
	}
	y = malloc(sizeof(hash_node_t));
	if (y == NULL)
		return (0);

	y->key = strdup(key);
	if (y->key == NULL)
		return (0);

	y->value = strdup(value);
	if (y->value == NULL)
		return (0);

	y->next = ht->array[i];
	ht->array[i] = y;
	return (1);
}
