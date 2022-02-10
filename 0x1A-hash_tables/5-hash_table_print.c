#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_print - a function that prints a hash table
 *
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *h;
	int x = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (index = 0; index <= ht->size; index++)
	{
		h = ht->array[index];
		while (h != NULL)
		{
			if (x == 1)
				printf(", ");

			printf("'%s': '%s'", h->key, h->value);
			x = 1;
			h = h->next;
		}
	}
	printf("}\n");
}
