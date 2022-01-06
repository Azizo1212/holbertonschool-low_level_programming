#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: double pointer to the list
 *
 * @n: data to insert in the new node
 *
 * Return: address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newo;

	if (!head)
		return (NULL);
	newo = malloc(sizeof(dlistint_t));
	if (!newo)
		return (NULL);
	newo->n = n;

	newo->next = *head;
	newo->prev = NULL;

	if (*head)
		(*head)->prev = newo;

	*head = newo;

	return (newo);
}
