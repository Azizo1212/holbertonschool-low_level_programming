#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 *
 * @head : list
 * Return: adress
 */

void free_listint2(listint_t **head)
{
	listint_t *i;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		i = i->next;
		free(head);

		*head = i;
	}

	head = NULL;
}
