#include "lists.h"
#include <string.h>

/**
 * free_dlistint - frees a list_t list.
 *@head: pointer.
 *
 *Return: nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *fr;

	while (head)
	{
		fr = head->next;
		free(head);
		head = fr;
	}

