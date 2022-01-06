#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all the elements of a dlistint_t list
 *
 * @h: pointer
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	nodes = 0;
	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
