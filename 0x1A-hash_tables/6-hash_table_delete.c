#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 *
 * @ht: hash table
 * Return: none
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *n;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	for (x = 0; x < ht->size; x++)
	{
		while (ht->array[x] != NULL)
		{
			n = ht->array[x]->next;
			free(ht->array[x]->key);
			free(ht->array[x]->value);
			free(ht->array[x]);
			ht->array[x] = n;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
