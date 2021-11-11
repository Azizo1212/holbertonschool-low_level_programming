#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list_t list.
 *
 * @head : list
 * Return: adress
 */

void free_list(list_t *head)
{
	list_t *h;

	while (head != NULL)
	{
		h = head->next;
		free(head);
		free(head->str);
		head = h;
	}
	h = NULL;
	free(h);
}
