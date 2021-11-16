#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 *
 * @head : list
 * Return: adress
 */

void free_listint(listint_t *head)
{
	listint_t *i;

	while (head != NULL)
	{
		i = head->next;
		free(head);

		head = i;
	}
	i = NULL;
	free(i);
}
