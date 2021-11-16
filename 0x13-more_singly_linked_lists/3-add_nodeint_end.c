#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_nodeint_end - check the code
 * @head: pointer
 * @n:int
 * Return: Adress
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i;
	listint_t *h;

	h = *head;
	i = malloc(sizeof(listint_t));
	if (i == NULL)
		return (NULL);

	i->n = n;
	i->next = NULL;
	if (*head == NULL)
	{
		*head = i;
		return (i);
	}
	while (h->next != NULL)
	{
		h = h->next;
	}
	h->next = i;
	return (i);
}
