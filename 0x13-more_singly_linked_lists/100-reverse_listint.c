#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverses a listint_t linked list.
 *
 * @head: pointer to a pointer to a struct
 * Return: pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *h = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = h;
		h = *head;
		*head = next;
	}
	*head = h;
	return (*head);
}
