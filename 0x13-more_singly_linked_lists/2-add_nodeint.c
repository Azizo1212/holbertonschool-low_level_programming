#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer
 * @n: int
 * Return: Adress
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_h;

	add_h = malloc(sizeof(listint_t));
	if (add_h == NULL)
		return (NULL);
	add_h->n = n;
	add_h->next = *head;
	*head = add_h;
	return (*head);
}
