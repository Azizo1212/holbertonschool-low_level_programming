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
	list_t *i;

	while (head != NULL)
	{
		i = head->next;
		free(head);
		free(head->str);
		head = i;
	}
	i = NULL;
	free(i);
}
