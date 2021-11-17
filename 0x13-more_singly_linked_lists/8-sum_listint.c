#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t .
 *
 *
 * @head: list
 * Return: int
 */

int sum_listint(listint_t *head)
{
	listint_t *h;
	unsigned int i;

	i = 0;
	if (head == NULL)
		return (0);
	h = head;
	while (h != NULL)
	{
		i = i + h->n;
		h = h->next;
	}
	return (i);
}
