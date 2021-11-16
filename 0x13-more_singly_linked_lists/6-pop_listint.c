#include <stdio.h>
#include "lists.h"

/**
 * pop_listint -  function that deletes the head node of a listint_t
 * @head: pointer
 * Return: head node’s data.
 */

int pop_listint(listint_t **head)
{
	listint_t *newhead;
	int i;
	if (*head == NULL)
		return (0);
	newhead = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = newhead;
	return (i);

}
