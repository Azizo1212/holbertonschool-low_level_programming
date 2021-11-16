#include "lists.h"
#include <stdio.h>
/**
 * listint_len - prints number of elements of a listint_t list.
 *
 * @h: list
 * Return: i
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
