#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: list
 * @index: number
 *
 * Return: node's pointer.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p;
	listint_t *h;
	p = 0;

	if (head == NULL)
		return (NULL);
	h = head;

	while (p < index && h != NULL)
	{
		h = h->next;
		p++;
	}

	if (p < index)
		return (NULL);
	return (h);
}
